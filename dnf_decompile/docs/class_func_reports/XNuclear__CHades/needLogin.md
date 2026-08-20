# needLogin

`_ZN8XNuclear6CHades9needLoginEv`

`XNuclear::CHades::needLogin()`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b9718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9718  _ZN8XNuclear6CHades9needLoginEv
#           XNuclear::CHades::needLogin()
# range [0x084b9718, 0x084b9773]
084b9718 +0x00:  push   %ebp
084b9719 +0x01:  mov    %esp,%ebp
084b971b +0x03:  push   %ebx
084b971c +0x04:  sub    $0x14,%esp
084b971f +0x07:  mov    0x8(%ebp),%eax
084b9722 +0x0a:  mov    0x24(%eax),%ebx
084b9725 +0x0d:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b972a +0x12:  mov    %eax,(%esp)
084b972d +0x15:  call   084b9ab2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x188>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x188
084b9732 +0x1a:  cmp    %eax,%ebx
084b9734 +0x1c:  setne  %al
084b9737 +0x1f:  test   %al,%al
084b9739 +0x21:  je     084b9768 <+0x50>
084b973b +0x23:  mov    0x8(%ebp),%eax
084b973e +0x26:  mov    %eax,(%esp)
084b9741 +0x29:  call   084b9200 <_ZN8XNuclear6CHades10Send_LoginEv>  ; XNuclear::CHades::Send_Login()
084b9746 +0x2e:  movl   $0x0,0x8(%esp)
084b974e +0x36:  movl   $0x3,0x4(%esp)
084b9756 +0x3e:  mov    0x8(%ebp),%eax
084b9759 +0x41:  mov    %eax,(%esp)
084b975c +0x44:  call   084b938c <_ZN8XNuclear6CHades13StdCateUpdateEtt>  ; XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short)
084b9761 +0x49:  mov    $0x1,%eax
084b9766 +0x4e:  jmp    084b976d <+0x55>
084b9768 +0x50:  mov    $0x0,%eax
084b976d +0x55:  add    $0x14,%esp
084b9770 +0x58:  pop    %ebx
084b9771 +0x59:  pop    %ebp
084b9772 +0x5a:  ret
084b9773 +0x5b:  nop
```

## 反编译 C

```c
// XNuclear::CHades::needLogin @ 0x84b9718

/* XNuclear::CHades::needLogin() */

bool __thiscall XNuclear::CHades::needLogin(CHades *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x24);
  iVar2 = CHadesServerProxy::GetHadesSocketConnSec(GlobalData::s_hades_proxy);
  if (iVar1 != iVar2) {
    Send_Login(this);
    StdCateUpdate(this,3,0);
  }
  return iVar1 != iVar2;
}
```
