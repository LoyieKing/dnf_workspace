# ~CEventEntity

`_ZN13EventClassify12CEventEntityD1Ev`

`EventClassify::CEventEntity::~CEventEntity()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810afc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810afc4  _ZN13EventClassify12CEventEntityD1Ev
#           EventClassify::CEventEntity::~CEventEntity()
# range [0x0810afc4, 0x0810aff7]
0810afc4 +0x00:  push   %ebp
0810afc5 +0x01:  mov    %esp,%ebp
0810afc7 +0x03:  sub    $0x18,%esp
0810afca +0x06:  mov    0x8(%ebp),%eax
0810afcd +0x09:  movl   $&_ZTVN13EventClassify12CEventEntityE+0x8,(%eax)
0810afd3 +0x0f:  mov    0x8(%ebp),%eax
0810afd6 +0x12:  add    $0x8,%eax
0810afd9 +0x15:  mov    %eax,(%esp)
0810afdc +0x18:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0810afe1 +0x1d:  mov    $0x0,%eax
0810afe6 +0x22:  test   %al,%al
0810afe8 +0x24:  je     0810aff5 <+0x31>
0810afea +0x26:  mov    0x8(%ebp),%eax
0810afed +0x29:  mov    %eax,(%esp)
0810aff0 +0x2c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810aff5 +0x31:  leave
0810aff6 +0x32:  ret
0810aff7 +0x33:  nop
```

## 反编译 C

```c
// EventClassify::CEventEntity::~CEventEntity @ 0x810afc4

/* WARNING: Removing unreachable block (ram,0x0810afea) */
/* EventClassify::CEventEntity::~CEventEntity() */

void __thiscall EventClassify::CEventEntity::~CEventEntity(CEventEntity *this)

{
  *(undefined ***)this = &PTR__CEventEntity_08b4d848;
  std::string::~string((string *)(this + 8));
  return;
}
```
