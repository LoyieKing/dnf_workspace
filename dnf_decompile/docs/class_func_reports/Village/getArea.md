# getArea

`_ZN7Village7getAreaEi`

`Village::getArea(int)`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c3ba2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3ba2  _ZN7Village7getAreaEi
#           Village::getArea(int)
# range [0x086c3ba2, 0x086c3c1f]
086c3ba2 +0x00:  push   %ebp
086c3ba3 +0x01:  mov    %esp,%ebp
086c3ba5 +0x03:  push   %ebx
086c3ba6 +0x04:  sub    $0x24,%esp
086c3ba9 +0x07:  cmpl   $0x0,0xc(%ebp)
086c3bad +0x0b:  js     086c3bba <+0x18>
086c3baf +0x0d:  mov    0x8(%ebp),%eax
086c3bb2 +0x10:  mov    0x24(%eax),%eax
086c3bb5 +0x13:  cmp    0xc(%ebp),%eax
086c3bb8 +0x16:  jg     086c3c08 <+0x66>
086c3bba +0x18:  mov    0x8(%ebp),%eax
086c3bbd +0x1b:  mov    0x24(%eax),%ebx
086c3bc0 +0x1e:  movl   $0x5,0xc(%esp)
086c3bc8 +0x26:  movl   $0x356,0x8(%esp)
086c3bd0 +0x2e:  movl   $&_ZZN7Village7getAreaEiE19__PRETTY_FUNCTION__,0x4(%esp)
086c3bd8 +0x36:  lea    -0x18(%ebp),%eax
086c3bdb +0x39:  mov    %eax,(%esp)
086c3bde +0x3c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c3be3 +0x41:  mov    %ebx,0xc(%esp)
086c3be7 +0x45:  mov    0xc(%ebp),%eax
086c3bea +0x48:  mov    %eax,0x8(%esp)
086c3bee +0x4c:  movl   $"area(%d) < 0 || area >= m_iAreaCount(%d)",0x4(%esp)
086c3bf6 +0x54:  lea    -0x18(%ebp),%eax
086c3bf9 +0x57:  mov    %eax,(%esp)
086c3bfc +0x5a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c3c01 +0x5f:  mov    $0x0,%eax
086c3c06 +0x64:  jmp    086c3c1a <+0x78>
086c3c08 +0x66:  mov    0x8(%ebp),%eax
086c3c0b +0x69:  mov    0x28(%eax),%edx
086c3c0e +0x6c:  mov    0xc(%ebp),%eax
086c3c11 +0x6f:  imul   $0x98,%eax,%eax
086c3c17 +0x75:  lea    (%edx,%eax,1),%eax
086c3c1a +0x78:  add    $0x24,%esp
086c3c1d +0x7b:  pop    %ebx
086c3c1e +0x7c:  pop    %ebp
086c3c1f +0x7d:  ret
```

## 反编译 C

```c
// Village::getArea @ 0x86c3ba2

/* Village::getArea(int) */

int __thiscall Village::getArea(Village *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_1c [20];
  
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    uVar1 = *(undefined4 *)(this + 0x24);
    cMyTrace::cMyTrace(local_1c,"Area* Village::getArea(int)",0x356,5);
    cMyTrace::operator()(local_1c,"area(%d) < 0 || area >= m_iAreaCount(%d)",param_1,uVar1);
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x28) + param_1 * 0x98;
  }
  return iVar2;
}
```
