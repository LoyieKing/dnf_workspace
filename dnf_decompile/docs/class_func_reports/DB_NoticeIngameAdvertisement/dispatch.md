# dispatch

`_ZN28DB_NoticeIngameAdvertisement8dispatchEiiP6Stream`

`DB_NoticeIngameAdvertisement::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_NoticeIngameAdvertisement` | `0x0844710e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844710e  _ZN28DB_NoticeIngameAdvertisement8dispatchEiiP6Stream
#           DB_NoticeIngameAdvertisement::dispatch(int, int, Stream*)
# range [0x0844710e, 0x08447161]
0844710e +0x00:  push   %ebp
0844710f +0x01:  mov    %esp,%ebp
08447111 +0x03:  sub    $0x28,%esp
08447114 +0x06:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
08447119 +0x0b:  mov    %eax,(%esp)
0844711c +0x0e:  call   080fd95e <_ZN27CInGameAdvertisementManager18ReloadADExposeInfoEv>  ; CInGameAdvertisementManager::ReloadADExposeInfo()
08447121 +0x13:  xor    $0x1,%eax
08447124 +0x16:  test   %al,%al
08447126 +0x18:  je     0844715b <+0x4d>
08447128 +0x1a:  movl   $"Fail Load In Game Advertisement Expose Info",0x10(%esp)
08447130 +0x22:  movl   $0xb17f,0xc(%esp)
08447138 +0x2a:  movl   $&_ZZN28DB_NoticeIngameAdvertisement8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08447140 +0x32:  movl   $"DBThread.cpp",0x4(%esp)
08447148 +0x3a:  movl   $0x1,(%esp)
0844714f +0x41:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447154 +0x46:  mov    $0x0,%eax
08447159 +0x4b:  jmp    08447160 <+0x52>
0844715b +0x4d:  mov    $0x1,%eax
08447160 +0x52:  leave
08447161 +0x53:  ret
```

## 反编译 C

```c
// DB_NoticeIngameAdvertisement::dispatch @ 0x844710e

/* DB_NoticeIngameAdvertisement::dispatch(int, int, Stream*) */

bool DB_NoticeIngameAdvertisement::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CInGameAdvertisementManager *this;
  
  this = (CInGameAdvertisementManager *)InGameADManagerInstance();
  cVar1 = CInGameAdvertisementManager::ReloadADExposeInfo(this);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_NoticeIngameAdvertisement::dispatch(int, int, Stream*)",0xb17f,
               "Fail Load In Game Advertisement Expose Info");
  }
  return cVar1 == '\x01';
}
```
