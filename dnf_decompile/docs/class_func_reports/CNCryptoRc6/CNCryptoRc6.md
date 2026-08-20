# CNCryptoRc6

`_ZN11CNCryptoRc6C1Ev`

`CNCryptoRc6::CNCryptoRc6()`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bb40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bb40  _ZN11CNCryptoRc6C1Ev
#           CNCryptoRc6::CNCryptoRc6()
# range [0x0809bb40, 0x0809bbdd]
0809bb40 +0x00:  push   %ebp
0809bb41 +0x01:  mov    %esp,%ebp
0809bb43 +0x03:  push   %esi
0809bb44 +0x04:  push   %ebx
0809bb45 +0x05:  sub    $0x50,%esp
0809bb48 +0x08:  mov    0x8(%ebp),%eax
0809bb4b +0x0b:  movl   $0x3,0x4(%esp)
0809bb53 +0x13:  mov    %eax,(%esp)
0809bb56 +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809bb5b +0x1b:  mov    0x8(%ebp),%eax
0809bb5e +0x1e:  movl   $&_ZTV11CNCryptoRc6+0x8,(%eax)
0809bb64 +0x24:  mov    0x8(%ebp),%eax
0809bb67 +0x27:  movl   $0x0,0x8(%eax)
0809bb6e +0x2e:  movl   $0x4c,(%esp)
0809bb75 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809bb7a +0x3a:  mov    %eax,%edx
0809bb7c +0x3c:  mov    0x8(%ebp),%eax
0809bb7f +0x3f:  mov    %edx,0x8(%eax)
0809bb82 +0x42:  mov    0x8(%ebp),%eax
0809bb85 +0x45:  mov    0x8(%eax),%eax
0809bb88 +0x48:  test   %eax,%eax
0809bb8a +0x4a:  je     0809bbd6 <+0x96>
0809bb8c +0x4c:  movl   $0x3c,0x4(%esp)
0809bb94 +0x54:  lea    -0x44(%ebp),%eax
0809bb97 +0x57:  mov    %eax,(%esp)
0809bb9a +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809bb9f +0x5f:  movl   $0x3c,0x8(%esp)
0809bba7 +0x67:  lea    -0x44(%ebp),%eax
0809bbaa +0x6a:  mov    %eax,0x4(%esp)
0809bbae +0x6e:  mov    0x8(%ebp),%eax
0809bbb1 +0x71:  mov    %eax,(%esp)
0809bbb4 +0x74:  call   0809bc84 <_ZN11CNCryptoRc610InitializeEPKhi>  ; CNCryptoRc6::Initialize(unsigned char const*, int)
0809bbb9 +0x79:  jmp    0809bbd6 <+0x96>
0809bbbb +0x7b:  mov    %edx,%ebx
0809bbbd +0x7d:  mov    %eax,%esi
0809bbbf +0x7f:  mov    0x8(%ebp),%eax
0809bbc2 +0x82:  mov    %eax,(%esp)
0809bbc5 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809bbca +0x8a:  mov    %esi,%eax
0809bbcc +0x8c:  mov    %ebx,%edx
0809bbce +0x8e:  mov    %eax,(%esp)
0809bbd1 +0x91:  call   08ae3750 <_Unwind_Resume>
0809bbd6 +0x96:  add    $0x50,%esp
0809bbd9 +0x99:  pop    %ebx
0809bbda +0x9a:  pop    %esi
0809bbdb +0x9b:  pop    %ebp
0809bbdc +0x9c:  ret
0809bbdd +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoRc6::CNCryptoRc6 @ 0x809bb40

/* CNCryptoRc6::CNCryptoRc6() */

void __thiscall CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 *this)

{
  void *pvVar1;
  uchar local_48 [60];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,3);
  *(undefined ***)this = &PTR__CNCryptoRc6_08b13928;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809bb75 to 0809bbb8 has its CatchHandler @ 0809bbbb */
  pvVar1 = operator_new(0x4c);
  *(void **)(this + 8) = pvVar1;
  if (*(int *)(this + 8) != 0) {
    GenerateRandomKey(local_48,0x3c);
    Initialize(this,local_48,0x3c);
  }
  return;
}
```
