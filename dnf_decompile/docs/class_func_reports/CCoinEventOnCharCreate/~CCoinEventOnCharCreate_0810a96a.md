# ~CCoinEventOnCharCreate

`_ZN22CCoinEventOnCharCreateD0Ev`

`CCoinEventOnCharCreate::~CCoinEventOnCharCreate()`

| 类 | 地址 |
|---|---|
| `CCoinEventOnCharCreate` | `0x0810a96a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a96a  _ZN22CCoinEventOnCharCreateD0Ev
#           CCoinEventOnCharCreate::~CCoinEventOnCharCreate()
# range [0x0810a96a, 0x0810a987]
0810a96a +0x00:  push   %ebp
0810a96b +0x01:  mov    %esp,%ebp
0810a96d +0x03:  sub    $0x18,%esp
0810a970 +0x06:  mov    0x8(%ebp),%eax
0810a973 +0x09:  mov    %eax,(%esp)
0810a976 +0x0c:  call   0810a93a <_ZN22CCoinEventOnCharCreateD1Ev>  ; CCoinEventOnCharCreate::~CCoinEventOnCharCreate()
0810a97b +0x11:  mov    0x8(%ebp),%eax
0810a97e +0x14:  mov    %eax,(%esp)
0810a981 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a986 +0x1c:  leave
0810a987 +0x1d:  ret
```

## 反编译 C

```c
// CCoinEventOnCharCreate::~CCoinEventOnCharCreate @ 0x810a96a

/* CCoinEventOnCharCreate::~CCoinEventOnCharCreate() */

void __thiscall CCoinEventOnCharCreate::~CCoinEventOnCharCreate(CCoinEventOnCharCreate *this)

{
  ~CCoinEventOnCharCreate(this);
  operator_delete(this);
  return;
}
```
