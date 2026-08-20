# AddToEnd

`_ZN8TaoCrypt9PublicKey8AddToEndEPKhj`

`TaoCrypt::PublicKey::AddToEnd(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PublicKey` | `0x08754260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754260  _ZN8TaoCrypt9PublicKey8AddToEndEPKhj
#           TaoCrypt::PublicKey::AddToEnd(unsigned char const*, unsigned int)
# range [0x08754260, 0x08754309]
08754260 +0x00:  push   %ebp
08754261 +0x01:  mov    %esp,%ebp
08754263 +0x03:  sub    $0x38,%esp
08754266 +0x06:  mov    %ebx,-0xc(%ebp)
08754269 +0x09:  mov    %esi,-0x8(%ebp)
0875426c +0x0c:  mov    0x8(%ebp),%esi
0875426f +0x0f:  mov    %edi,-0x4(%ebp)
08754272 +0x12:  mov    0x10(%ebp),%edi
08754275 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0875427a +0x1a:  add    $0xc1891e,%ebx
08754280 +0x20:  movb   $0x0,0x4(%esp)
08754285 +0x25:  mov    0x4(%esi),%eax
08754288 +0x28:  add    %edi,%eax
0875428a +0x2a:  mov    %eax,(%esp)
0875428d +0x2d:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08754292 +0x32:  mov    0x4(%esi),%ecx
08754295 +0x35:  mov    %eax,%edx
08754297 +0x37:  mov    (%esi),%eax
08754299 +0x39:  mov    %edx,-0x1c(%ebp)
0875429c +0x3c:  mov    %ecx,0x8(%esp)
087542a0 +0x40:  mov    %edx,(%esp)
087542a3 +0x43:  mov    %eax,0x4(%esp)
087542a7 +0x47:  call   0807d8a0 <_init+0x198>
087542ac +0x4c:  mov    0x4(%esi),%eax
087542af +0x4f:  mov    -0x1c(%ebp),%edx
087542b2 +0x52:  mov    0xc(%ebp),%ecx
087542b5 +0x55:  mov    %edi,0x8(%esp)
087542b9 +0x59:  add    %edx,%eax
087542bb +0x5b:  mov    %ecx,0x4(%esp)
087542bf +0x5f:  mov    %eax,(%esp)
087542c2 +0x62:  call   0807d8a0 <_init+0x198>
087542c7 +0x67:  mov    (%esi),%eax
087542c9 +0x69:  movl   $0x0,(%esi)
087542cf +0x6f:  movb   $0x0,0x4(%esp)
087542d4 +0x74:  mov    %eax,(%esp)
087542d7 +0x77:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087542dc +0x7c:  mov    -0x1c(%ebp),%edx
087542df +0x7f:  add    %edi,0x4(%esi)
087542e2 +0x82:  mov    %edx,(%esi)
087542e4 +0x84:  movb   $0x0,0x4(%esp)
087542e9 +0x89:  movl   $0x0,(%esp)
087542f0 +0x90:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087542f5 +0x95:  mov    -0xc(%ebp),%ebx
087542f8 +0x98:  mov    -0x8(%ebp),%esi
087542fb +0x9b:  mov    -0x4(%ebp),%edi
087542fe +0x9e:  mov    %ebp,%esp
08754300 +0xa0:  pop    %ebp
08754301 +0xa1:  ret
08754302 +0xa2:  lea    0x0(%esi,%eiz,1),%esi
08754309 +0xa9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::PublicKey::AddToEnd @ 0x8754260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::AddToEnd(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::PublicKey::AddToEnd(PublicKey *this,uchar *param_1,uint param_2)

{
  undefined4 uVar1;
  void *__dest;
  uint in_stack_ffffffc8;
  uint uVar2;
  
  __dest = operator_new__(*(int *)(this + 4) + param_2,in_stack_ffffffc8 & 0xffffff00);
  memcpy(__dest,*(void **)this,*(size_t *)(this + 4));
  memcpy((void *)(*(int *)(this + 4) + (int)__dest),param_1,param_2);
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = 0;
  uVar2 = (uint)param_1 & 0xffffff00;
  operator_delete__(uVar1,uVar2);
  *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  *(void **)this = __dest;
  operator_delete__(0,uVar2 & 0xffffff00);
  return;
}
```
