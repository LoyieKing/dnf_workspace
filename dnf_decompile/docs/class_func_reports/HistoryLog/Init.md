# Init

`_ZN10HistoryLog4InitEv`

`HistoryLog::Init()`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9ad4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9ad4  _ZN10HistoryLog4InitEv
#           HistoryLog::Init()
# range [0x084b9ad4, 0x084b9b31]
084b9ad4 +0x00:  push   %ebp
084b9ad5 +0x01:  mov    %esp,%ebp
084b9ad7 +0x03:  sub    $0x78,%esp
084b9ada +0x06:  lea    -0x60(%ebp),%eax
084b9add +0x09:  mov    %eax,0x4(%esp)
084b9ae1 +0x0d:  movl   $"./history/",(%esp)
084b9ae8 +0x14:  call   08106b9a <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x1c>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1c
084b9aed +0x19:  shr    $0x1f,%eax
084b9af0 +0x1c:  test   %al,%al
084b9af2 +0x1e:  je     084b9b2a <+0x56>
084b9af4 +0x20:  movl   $0x1fd,0x4(%esp)
084b9afc +0x28:  movl   $"./history/",(%esp)
084b9b03 +0x2f:  call   0807d800 <_init+0xf8>
084b9b08 +0x34:  shr    $0x1f,%eax
084b9b0b +0x37:  test   %al,%al
084b9b0d +0x39:  je     084b9b2a <+0x56>
084b9b0f +0x3b:  movl   $"./history/",0x4(%esp)
084b9b17 +0x43:  movl   $"Fail To Make Directory, PATH[%s]\n",(%esp)
084b9b1e +0x4a:  call   0807db60 <_init+0x458>
084b9b23 +0x4f:  mov    $0x0,%eax
084b9b28 +0x54:  jmp    084b9b2f <+0x5b>
084b9b2a +0x56:  mov    $0x1,%eax
084b9b2f +0x5b:  leave
084b9b30 +0x5c:  ret
084b9b31 +0x5d:  nop
```

## 反编译 C

```c
// HistoryLog::Init @ 0x84b9ad4

/* HistoryLog::Init() */

undefined4 HistoryLog::Init(void)

{
  int iVar1;
  stat local_64;
  
  iVar1 = stat("./history/",&local_64);
  if ((iVar1 < 0) && (iVar1 = mkdir("./history/",0x1fd), iVar1 < 0)) {
    printf("Fail To Make Directory, PATH[%s]\n","./history/");
    return 0;
  }
  return 1;
}
```
