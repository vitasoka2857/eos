#include <eosio/web_client_plugin/beast_client.hpp>

using namespace eosio;
using namespace eosio::web;

beast_client::beast_client(){}
beast_client::~beast_client(){}

void beast_client::init(boost::asio::io_context& context){
}

void beast_client::exec(std::string_view host,
                        uint32_t port,
                        std::string_view method, 
                        std::string_view path,
                        client_handler callback,
                        std::string_view post_data,
                        const Ihttps_client::header_map* header){
}

void beast_client::init_ssl(std::string_view cert){
}