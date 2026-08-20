# GetIP

`_ZN8XNuclear6CHades5GetIPEPc`

`XNuclear::CHades::GetIP(char*)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b9774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9774  _ZN8XNuclear6CHades5GetIPEPc
#           XNuclear::CHades::GetIP(char*)
# range [0x084b9774, 0x084b97fd]
084b9774 +0x00:  push   %ebp
084b9775 +0x01:  mov    %esp,%ebp
084b9777 +0x03:  sub    $0x18,%esp
084b977a +0x06:  mov    0x8(%ebp),%eax
084b977d +0x09:  mov    0x20(%eax),%eax
084b9780 +0x0c:  lea    0xe0(%eax),%edx
084b9786 +0x12:  movl   $0x4,0x8(%esp)
084b978e +0x1a:  mov    0xc(%ebp),%eax
084b9791 +0x1d:  mov    %eax,0x4(%esp)
084b9795 +0x21:  mov    %edx,(%esp)
084b9798 +0x24:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084b979d +0x29:  mov    0xc(%ebp),%eax
084b97a0 +0x2c:  movzbl (%eax),%eax
084b97a3 +0x2f:  test   %al,%al
084b97a5 +0x31:  jne    084b97f8 <+0x84>
084b97a7 +0x33:  mov    0x8(%ebp),%eax
084b97aa +0x36:  mov    0x20(%eax),%eax
084b97ad +0x39:  add    $0x8e418,%eax
084b97b2 +0x3e:  movzbl (%eax),%eax
084b97b5 +0x41:  test   %al,%al
084b97b7 +0x43:  je     084b97fb <+0x87>
084b97b9 +0x45:  movl   $0x10,0x8(%esp)
084b97c1 +0x4d:  movl   $0x0,0x4(%esp)
084b97c9 +0x55:  mov    0xc(%ebp),%eax
084b97cc +0x58:  mov    %eax,(%esp)
084b97cf +0x5b:  call   0807dcc0 <_init+0x5b8>
084b97d4 +0x60:  mov    0x8(%ebp),%eax
084b97d7 +0x63:  mov    0x20(%eax),%eax
084b97da +0x66:  add    $0x8e418,%eax
084b97df +0x6b:  movl   $0x10,0x8(%esp)
084b97e7 +0x73:  mov    %eax,0x4(%esp)
084b97eb +0x77:  mov    0xc(%ebp),%eax
084b97ee +0x7a:  mov    %eax,(%esp)
084b97f1 +0x7d:  call   0807d8d0 <_init+0x1c8>
084b97f6 +0x82:  jmp    084b97fc <+0x88>
084b97f8 +0x84:  nop
084b97f9 +0x85:  jmp    084b97fc <+0x88>
084b97fb +0x87:  nop
084b97fc +0x88:  leave
084b97fd +0x89:  ret
```

## 反编译 C

```c
// XNuclear::CHades::GetIP @ 0x84b9774

/* XNuclear::CHades::GetIP(char*) */

void __thiscall XNuclear::CHades::GetIP(CHades *this,char *param_1)

{
  CNetwork<4096,450000>::GetPeerIP2
            ((CNetwork<4096,450000> *)(*(int *)(this + 0x20) + 0xe0),param_1,4);
  if ((*param_1 == '\0') && (*(char *)(*(int *)(this + 0x20) + 0x8e418) != '\0')) {
    memset(param_1,0,0x10);
    strncpy(param_1,(char *)(*(int *)(this + 0x20) + 0x8e418),0x10);
  }
  return;
}
```
