#pragma once

/*────────────────────────────────────────────────────────────────────────────*/

#include <nodepp/nodepp.h>
#include <nodepp/path.h>
#include <nodepp/fs.h>
#include <nodepp/ws.h>

/*────────────────────────────────────────────────────────────────────────────*/

namespace rl { namespace game {

    queue_t<ws_t> list; tcp_t server() {

        auto server = ws::server();

        server.onConnect([=]( ws_t cli ){

            list.push( cli ); auto ID = list.last();

            cli.onData([=]( string_t data ){
                for( auto &x: list.data() ){
                 if( x.get_fd() == cli.get_fd() )
                   { continue; } x.write( data ); 
                }
            });

            cli.onClose([=](){
                console::log( "Disconnected" );
                list.erase( ID );
            });

            console::log( "Connected" );

        });

        server.listen( "localhost", 8000, [=]( socket_t server ){
            console::log("server started at ws://localhost:8000");
        });

        return server;

    }

}}

/*────────────────────────────────────────────────────────────────────────────*/