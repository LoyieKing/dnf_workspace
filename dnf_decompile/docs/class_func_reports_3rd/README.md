# df_game_r 三方库函数报告（已分离）

> 这些报告对应的类/命名空间来自第三方或外部库，不属于游戏代码，已从主报告集 [class_func_reports/](../class_func_reports/) 移出。
> 共 203 份：yaSSL（SSL）、TaoCrypt（加密）、TiXml（tinyxml）、boost、std/__gnu_cxx/__cxxabiv1（编译器标准库）、FlexLexer（flex 生成器）。

## 工程内可引用的三方库源码位置（2026-08-16 已补齐缺失）

| 三方库 | 工程内位置 | 引用 include 路径 | 补齐内容 |
|---|---|---|---|
| Boost 1.48.0（完整） | source/Library3rd/Boost/Include | `-isystem source/Library3rd/Boost/Include` | 由裁剪版 426 头补齐为完整 8,946 头（tokenizer/lexical_cast/any/optional/variant/unordered_map/filesystem/asio/regex 等全部） |
| MySQL（libmysqlclient 源码） | source/Library3rd/MySQL | `-I source/Library3rd/MySQL/include` | 完整源码树，无需补齐 |
| yaSSL（SSL） | source/Library3rd/MySQL/extlib/yassl | `-I .../yassl/include` | 完整（MySQL 自带），无需补齐 |
| TaoCrypt（加密，含 mySTL） | source/Library3rd/MySQL/extlib/yassl/taocrypt | `-I .../taocrypt/include -I .../taocrypt/mySTL` | 完整，无需补齐 |
| TinyXML 2.6.2 | source/DNFServer/ServerCommon | `-I source/DNFServer/ServerCommon`（STL 模式加 `-DTIXML_USE_STL`） | 补齐 tinystr.h + tinystr.cpp（非 STL 模式可用） |
| zlib 1.2.11 | toolchains/zlib32 | `-I toolchains/zlib32` | 补齐 zlib.h + zconf.h（原只有 libz.a） |
| 编译器/运行库 | toolchains/c5root、c6root、lsd44 | 工程 CMake sysroot | 完整 |

> 验证（c6root g++ 4.4.7，-m32 -O0，全部 0 错误）：
> - /tmp/thirdparty_full_check.cc：boost shared_ptr/tokenizer/lexical_cast/any/optional/unordered_map + zlib.h + tinyxml(STL)
> - /tmp/tinystr_check.cc：tinyxml 非 STL 模式（tinystr.h）
> - /tmp/thirdparty_check.cc：boost + tinyxml + mysql.h + yassl + TaoCrypt::Integer（回归）
