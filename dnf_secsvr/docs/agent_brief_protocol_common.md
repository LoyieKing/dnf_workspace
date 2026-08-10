# agent 任务简报：protocol/common 逆向（gunnersvr 轮）

目标：把 `source/gunnersvr/src/protocol/common/` 下 DWARF 桩 .cpp 的全部函数体补完，
语义与 `gunnersvr` 二进制一致。验收标准：
1. `check_file_coverage.py` 对每个文件 **MISSING = 0**；
2. 纯函数用 `uni_call.py` 调二进制对拍（输入/输出一致）；
3. 关键函数助记符重叠尽量高（`mnemonic_overlap.py`）。

## 环境
- 二进制：`/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/secsvr/gunnersvr/gunnersvr`
- 源码根：`/mnt/d/Docs/my_sources/dnf_workspace/dnf_secsvr/`
- 编译（32 位 GCC 4.1.2 包装，只 `-c`）：
  `cd /mnt/d/Docs/my_sources/dnf_workspace/dnf_secsvr && toolchain/c5xx.sh -c -I source/gunnersvr -I source/gunnersvr/import -o /tmp/<名>.o source/gunnersvr/src/protocol/common/<文件>.cpp`
- 覆盖审计：
  `python3 toolchain/check_file_coverage.py <BIN> /tmp/<obj目录> <文件>.cpp`
- 符号清单（地址/行号/全名）：`python3 toolchain/file_symbols.py <BIN> <文件片段>`
- 反汇编：`objdump -d --start-address=0xADDR --stop-address=0xEND <BIN>`
- 行为对拍（调二进制里的函数）：`python3 toolchain/uni_call.py --bin <BIN> [--plain] [--ret] <mangled名> <参数>`
  - 类静态方法/命名空间函数必须加 `--plain`（不要自动 this）。
  - 成员方法（有 this）不加 `--plain`，或用 `--plain` 手动传 this 指针（hex 串=分配内存传指针）。
  - 参数：`int:N` 传整数；hex 串（如 `E807021D`）分配 guest 内存写字节并传指针。
  - mangled 名用 `nm <BIN> | grep <子串>` 查。

## 关键已还原事实（TDR 运行库，三件套共享）

### 类布局
- `TdrWriteBuf`：+0 `char* data_`；+4 `size_t pos_`；+8 `size_t limit_`；+0xc `bool allocated_`（TdrBuf.h 已重建，方法全 inline）。
- `TdrReadBuf`：+0 `const char* data_`；+4 `size_t pos_`；+8 `size_t limit_`。
- `TdrOutStream`：+0 `FILE* fp_`；+4 `char* data_`；+8 pos；+0xc limit；+0x14 `TdrError::ErrorType error_`。
- `TdrXmlFile`：+0 `char* buf_`。
- `TdrDate`：uint16 year + uint8 month + uint8 day（wire uint32 = year | month<<16 | day<<24）。
- `TdrTime`：uint16 hour + uint8 minute + uint8 second（wire = hour | minute<<16 | second<<24）。
- `TdrDateTime`：year(2)+month+day+hour(2)+min+sec（wire uint64 = year | month<<16 | day<<24 | hour<<32 | min<<40 | sec<<48）。

### TDR 线上格式（大端）
- uint8/16/32/64：大端定长；写前检查 `limit-pos`（>0 / >1 / >3 / >7），不足返回
  `-1`（TDR_ERR_SHORT_BUF_FOR_WRITE）；读不足返回 `-2`（TDR_ERR_SHORT_BUF_FOR_READ）。
- string：uint32 大端长度（**含结尾 NUL**）+ 字节（含 NUL）。readString 校验：
  长度>0x800 → -3；==0 → -4；dest==NULL → -8；末尾非 NUL 或 strlen+1 != len → -5。
- float/double：大端 4/8 字节（按位模式）。

### 日期/时间工具语义（已核对二进制）
- `str2TdrDate`：`strptime(str, "%Y-%m-%d", &tm)`；失败或 isValid 失败 → -14；编码 year|mon<<16|day<<24。
- `str2TdrTime`：`strptime(str, "%H:%M:%S", &tm)`；校验 hour≤999(宽松)、min≤59、sec≤59 → 否则 -13。
- `str2TdrIP`：`inet_addr` 风格（自己反汇编确认，注意字节序）。
- `UTC2TdrDateTime(utc)`：`localtime_r`；失败 → -16；hour+999>1998、min>59、sec>59 → -15；
  编码见上。
- `TdrDate::isValid`：year>9999 → false；month>12 → false；day>31 → false；
  month∈{4,6,9,11} → day!=31；month==2 → day≤(闰?29:28)；其余（含 month==0/day==0）→ true。
  闰年 = year%4==0 && (year%100!=0 || year%400==0)。
- `TdrBufUtil::print*` 模式：`printMultiStr(buf,"    ",indent)` → `textize(buf,"%s: ",variable)`
  （有 arrIdx 时 "%s[%u]: "）→ 数值 → `writeChar(sep)` → 末尾补 `'\0'`。
  printTdrDate 用 "%4d-%02d-%02d"；printTdrIP 形如 "%u.%u.%u.%u"（自行从二进制确认）。
- `TdrWriteBuf::textize`：vsnprintf 到 data+pos，n<0 或 n>=limit-pos → -1；否则 pos+=n（不写 NUL）。
- `TdrOutStream::output/vtextize`：fp_ 非空走 fwrite/vfprintf（失败 error_=-25）；
  否则同 textize（buffer 模式，error_ 存成员）。
- `TdrXmlFile::load`：fopen "rb"（失败 -22）；ftell 大小；`new(nothrow) char[size+1]`（失败 -26）；
  fread 不足 → -24；buf[size]=0；成功 0。
- `TdrParse::parse*`：strtok_r 按 `,`/`;` 分段（自行确认分隔符）；解析失败调 macro 回调
  （宏函数返回错误码并设 `*parsed`）；`_default` 生效规则从二进制确认。

### XML（TdrXml.cpp）
- 基于 rapidxml 1.13（已装到 `source/gunnersvr/import/include/opensource/rapidxml/rapidxml/`）。
- `rapidxml::parse_error::what()` 定义在 TdrXml.cpp（stub 顶部 `const char * what()` 需加类限定）。
- `xml_document<char>::parse_element<0>/parse_node<0>` 弱符号由本 TU 实例化（stub 里
  `xml_node<char> * parse_element<0>(char *&text)` 需加 `rapidxml::xml_document<char>::` 限定）。
- `tsf4g_tdr::strip(char* head, char* tail)` 返回 char*，声明已在 TdrXml.h。
- TdrXmlReader/Writer 的类成员偏移由你自己从构造/方法反汇编提取（GCC -O2 结构清楚）。

## 每个 .cpp 的作业步骤
1. `python3 toolchain/file_symbols.py <BIN> <文件>.cpp` 拿到全部符号（地址、行号）。
2. 对照 stub 内签名（行号 = 原源码行），把函数名限定为正确作用域（从 demangled 名看，
   例如 stub 的 `parseUInt8(...)` 实为 `tsf4g_tdr::TdrParse::parseUInt8`）。
3. `objdump` 反汇编该函数地址区间，还原语义。**写完一个函数立即保存到 .cpp**（不要攒到最后）。
4. 编译 + 覆盖审计循环：目标该文件 MISSING=0。
5. 行为对拍：纯函数（TdrParse/TdrTypeUtil/TdrBufUtil/print 族）用 uni_call 对拍若干随机向量。
6. 助记符重叠：`python3 toolchain/mnemonic_overlap.py <BIN> <你的.o>` 看主要函数。

## 头文件约束
- Tdr 头（TdrBuf/TdrParse/TdrTypeUtil/TdrBufUtil/TdrIO/TdrXml/TdrTime/TdrPal/TdrError）是共享基础，
  **已重建完毕**。如发现必须改动，先在进度里说明再改（改动要同步三棵树）。
- comm_conf_*.h / comm_proto_public_*.h 是旧桩（匿名 struct 被拍平、`/*anon struct*/ int` 占位），
  由对应 agent 自己重写；重写时以 DWARF 偏移（可用 `toolchain/dwarf_proto_extract.py` 或自写 pyelftools 脚本）
  与二进制反汇编为准。成员名/偏移来自二进制 `mov disp(%reg)` 即可确定。
- 每个文件顶部注释可改写为 "Reconstructed from gunnersvr disassembly"。

## 纪律
- **文件落盘即进度**：每实现一个函数立即写入源文件。
- 不要动其他 agent 的文件；共享头必须同步（见上）。
- 不做 `rm`、不提交 git。
- 完成后回最终报告：覆盖结果、对拍结果、遗留疑问。

## 轮次 2 补充（zergsvr / secagent / framework）

- zergsvr 二进制：`/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/secsvr/zergsvr/zergsvr`
- secagent 二进制：`/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/secsvr/zergsvr/secagent`
- 三棵树共享头已统一（TdrBuf/TdrXml/TdrIO/TdrTypeUtil/TdrPal/TdrError/TdrParse/TdrTime/TdrBufUtil +
  rapidxml 1.13 + TenHash.h/TenCrypt.h），`source/<root>/src/protocol/common/` 下同名文件可直接从
  gunnersvr 复制为基线，再按各自二进制的符号集（`file_symbols.py`）核对差异：
  - zergsvr：TdrXml.cpp 25 符号（比 gunnersvr 多 4）、comm_proto_public_cfgsvr.cpp 243（少 9）；
    无 comm_conf_gunnersvr / comm_proto_public_monitorsvr。
  - secagent：TdrXml.cpp 25；comm_proto_public_cfgsvr.cpp 261；另有 src/protocol/formmog/ 4 个文件
    （formmog_conf_secagent 48、formmog_proto_antibot_client 980、
    formmog_proto_public_secsvr 162、formmog_proto_public_tsssdk 90）。
- 每个二进制的 output/protocol/common/release/include/ 也要同步最新头（framework 消费该路径）。
- framework（commlib/framework，13~15 CU）：.cpp 桩的 include 闭包同样要先清理（去 `<built-in>` 与
  系统头），头文件（comm_*.h）是坏桩需按 DWARF+反汇编重建；编译包含路径
  `-I source/<root> -I source/<root>/import`；输出头同步到 `output/commlib/framework/release/include/`。
- TdrDateTime 编码注意：uint64 = year | month<<16 | day<<24 | hour<<32 | min<<48 | sec<<56
  （struct 布局 {u16 year; u8 month; u8 day; u16 hour; u8 min; u8 sec;}，直接 memcpy 结构体即对）。
