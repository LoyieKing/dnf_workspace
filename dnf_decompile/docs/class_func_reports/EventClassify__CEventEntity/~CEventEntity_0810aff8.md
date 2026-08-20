# ~CEventEntity

`_ZN13EventClassify12CEventEntityD0Ev`

`EventClassify::CEventEntity::~CEventEntity()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810aff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810aff8  _ZN13EventClassify12CEventEntityD0Ev
#           EventClassify::CEventEntity::~CEventEntity()
# range [0x0810aff8, 0x0810b015]
0810aff8 +0x00:  push   %ebp
0810aff9 +0x01:  mov    %esp,%ebp
0810affb +0x03:  sub    $0x18,%esp
0810affe +0x06:  mov    0x8(%ebp),%eax
0810b001 +0x09:  mov    %eax,(%esp)
0810b004 +0x0c:  call   0810afc4 <_ZN13EventClassify12CEventEntityD1Ev>  ; EventClassify::CEventEntity::~CEventEntity()
0810b009 +0x11:  mov    0x8(%ebp),%eax
0810b00c +0x14:  mov    %eax,(%esp)
0810b00f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b014 +0x1c:  leave
0810b015 +0x1d:  ret
```

## 反编译 C

```c
// EventClassify::CEventEntity::~CEventEntity @ 0x810aff8

/* EventClassify::CEventEntity::~CEventEntity() */

void __thiscall EventClassify::CEventEntity::~CEventEntity(CEventEntity *this)

{
  ~CEventEntity(this);
  operator_delete(this);
  return;
}
```
