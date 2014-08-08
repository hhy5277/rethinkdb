// Copyright 2010-2014 RethinkDB, all rights reserved.
#include "clustering/administration/servers/name_metadata.hpp"

RDB_IMPL_SERIALIZABLE_3(server_name_business_card_t,
                        rename_addr, retag_addr, startup_time);
INSTANTIATE_SERIALIZABLE_FOR_CLUSTER(server_name_business_card_t);

