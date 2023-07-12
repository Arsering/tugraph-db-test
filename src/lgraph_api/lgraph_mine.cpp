/**
 * Copyright 2022 AntGroup CO., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */

#include "core/kv_store.h"
#include "core/transaction.h"
#include "core/type_convert.h"

#include "lgraph/lgraph_mine.h"

namespace lgraph_api {
void log_breakdown(std::string& log_info) {
    fma_common::LoggerStream(fma_common::Logger::GetMine("breaddown_log"), fma_common::LL_INFO)
        << log_info;
}
}  // namespace lgraph_api
