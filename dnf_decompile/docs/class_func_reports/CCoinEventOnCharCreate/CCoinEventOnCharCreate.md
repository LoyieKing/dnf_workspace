# CCoinEventOnCharCreate

`_ZN22CCoinEventOnCharCreateC1Ev`

`CCoinEventOnCharCreate::CCoinEventOnCharCreate()`

| 类 | 地址 |
|---|---|
| `CCoinEventOnCharCreate` | `0x0810a914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a914  _ZN22CCoinEventOnCharCreateC1Ev
#           CCoinEventOnCharCreate::CCoinEventOnCharCreate()
# range [0x0810a914, 0x0810a939]
0810a914 +0x00:  push   %ebp
0810a915 +0x01:  mov    %esp,%ebp
0810a917 +0x03:  sub    $0x18,%esp
0810a91a +0x06:  mov    0x8(%ebp),%eax
0810a91d +0x09:  mov    %eax,(%esp)
0810a920 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0810a925 +0x11:  mov    0x8(%ebp),%eax
0810a928 +0x14:  movl   $&_ZTV22CCoinEventOnCharCreate+0x8,(%eax)
0810a92e +0x1a:  mov    0x8(%ebp),%eax
0810a931 +0x1d:  movl   $0x5,0xc(%eax)
0810a938 +0x24:  leave
0810a939 +0x25:  ret
```

## 反编译 C

```c
// CCoinEventOnCharCreate::CCoinEventOnCharCreate @ 0x810a914

/* CCoinEventOnCharCreate::CCoinEventOnCharCreate() */

void __thiscall CCoinEventOnCharCreate::CCoinEventOnCharCreate(CCoinEventOnCharCreate *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCoinEventOnCharCreate_08b4ac68;
  *(undefined4 *)(this + 0xc) = 5;
  return;
}
```
