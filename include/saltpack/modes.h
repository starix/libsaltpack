/*
 * Copyright 2016 Luca Zanconato
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SALTPACK_MODES_H
#define SALTPACK_MODES_H

namespace saltpack {

    const int MODE_ENCRYPTION = 0; /**< Encryption mode, used in ArmoredOutputStream. */

    const int MODE_ATTACHED_SIGNATURE = 1; /**< Attached signature mode, used in ArmoredOutputStream. */

    const int MODE_DETACHED_SIGNATURE = 2; /**< Detached signature mode, used in ArmoredOutputStream. */

    const int MODE_SIGNCRYPTION = 3; /**< Signcryption mode. */
}

#endif //SALTPACK_MODES_H
