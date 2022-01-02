# Byte-Order-Definition
Программка определения порядка байтов на текущем узле.

В названии функция h - узел (host), n - сеть (network), s - тип short, l - тип long (по факту usigned int).

Сетевой порядок байт - обратный (big-endian).
Для перевода в стетевой порядок байт нужно пользоваться функциями: htons(uint16_t host16bitvalue) и htonl(uint32_t host32bitvalue).
Для перевода в порядок байт узла нужно пользоваться функциями: ntons(uint16_t net16bitvalue) и ntonl(uint32_t net32bitvalue).
