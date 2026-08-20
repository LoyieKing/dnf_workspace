# getTimeFromString

`_ZN10CBingoTest17getTimeFromStringESs`

`CBingoTest::getTimeFromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080caf3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caf3e  _ZN10CBingoTest17getTimeFromStringESs
#           CBingoTest::getTimeFromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x080caf3e, 0x080caf7b]
080caf3e +0x00:  push   %ebp
080caf3f +0x01:  mov    %esp,%ebp
080caf41 +0x03:  sub    $0x58,%esp
080caf44 +0x06:  lea    -0x10(%ebp),%eax
080caf47 +0x09:  mov    0xc(%ebp),%edx
080caf4a +0x0c:  mov    %edx,0x4(%esp)
080caf4e +0x10:  mov    %eax,(%esp)
080caf51 +0x13:  call   080cceed <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d3a>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d3a
080caf56 +0x18:  sub    $0x4,%esp
080caf59 +0x1b:  lea    -0x3c(%ebp),%eax
080caf5c +0x1e:  lea    -0x10(%ebp),%edx
080caf5f +0x21:  mov    %edx,0x4(%esp)
080caf63 +0x25:  mov    %eax,(%esp)
080caf66 +0x28:  call   080cce6e <_GLOBAL__I__ZN10BingoEventC2Ev+0x1cbb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1cbb
080caf6b +0x2d:  sub    $0x4,%esp
080caf6e +0x30:  lea    -0x3c(%ebp),%eax
080caf71 +0x33:  mov    %eax,(%esp)
080caf74 +0x36:  call   0807e820 <_init+0x1118>
080caf79 +0x3b:  leave
080caf7a +0x3c:  ret
080caf7b +0x3d:  nop
```

## 反编译 C

```c
// CBingoTest::getTimeFromString @ 0x80caf3e

/* CBingoTest::getTimeFromString(std::string) */

void __thiscall CBingoTest::getTimeFromString(CBingoTest *this,string param_1)

{
  tm local_40;
  posix_time local_14 [16];
  
  boost::posix_time::time_from_string(local_14,(string *)param_1._M_dataplus._M_p);
  boost::posix_time::to_tm((ptime *)&local_40);
  mktime(&local_40);
  return;
}
```
