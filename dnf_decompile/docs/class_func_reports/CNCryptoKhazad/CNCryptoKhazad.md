# CNCryptoKhazad

`_ZN14CNCryptoKhazadC1Ev`

`CNCryptoKhazad::CNCryptoKhazad()`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809aa54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809aa54  _ZN14CNCryptoKhazadC1Ev
#           CNCryptoKhazad::CNCryptoKhazad()
# range [0x0809aa54, 0x0809aaf1]
0809aa54 +0x00:  push   %ebp
0809aa55 +0x01:  mov    %esp,%ebp
0809aa57 +0x03:  push   %esi
0809aa58 +0x04:  push   %ebx
0809aa59 +0x05:  sub    $0x30,%esp
0809aa5c +0x08:  mov    0x8(%ebp),%eax
0809aa5f +0x0b:  movl   $0x9,0x4(%esp)
0809aa67 +0x13:  mov    %eax,(%esp)
0809aa6a +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809aa6f +0x1b:  mov    0x8(%ebp),%eax
0809aa72 +0x1e:  movl   $&_ZTV14CNCryptoKhazad+0x8,(%eax)
0809aa78 +0x24:  mov    0x8(%ebp),%eax
0809aa7b +0x27:  movl   $0x0,0x8(%eax)
0809aa82 +0x2e:  movl   $0x90,(%esp)
0809aa89 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809aa8e +0x3a:  mov    %eax,-0xc(%ebp)
0809aa91 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0809aa95 +0x41:  je     0809aaea <+0x96>
0809aa97 +0x43:  mov    0x8(%ebp),%eax
0809aa9a +0x46:  mov    -0xc(%ebp),%edx
0809aa9d +0x49:  mov    %edx,0x8(%eax)
0809aaa0 +0x4c:  movl   $0x10,0x4(%esp)
0809aaa8 +0x54:  lea    -0x1c(%ebp),%eax
0809aaab +0x57:  mov    %eax,(%esp)
0809aaae +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809aab3 +0x5f:  movl   $0x10,0x8(%esp)
0809aabb +0x67:  lea    -0x1c(%ebp),%eax
0809aabe +0x6a:  mov    %eax,0x4(%esp)
0809aac2 +0x6e:  mov    0x8(%ebp),%eax
0809aac5 +0x71:  mov    %eax,(%esp)
0809aac8 +0x74:  call   0809aba8 <_ZN14CNCryptoKhazad10InitializeEPKhi>  ; CNCryptoKhazad::Initialize(unsigned char const*, int)
0809aacd +0x79:  jmp    0809aaea <+0x96>
0809aacf +0x7b:  mov    %edx,%ebx
0809aad1 +0x7d:  mov    %eax,%esi
0809aad3 +0x7f:  mov    0x8(%ebp),%eax
0809aad6 +0x82:  mov    %eax,(%esp)
0809aad9 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809aade +0x8a:  mov    %esi,%eax
0809aae0 +0x8c:  mov    %ebx,%edx
0809aae2 +0x8e:  mov    %eax,(%esp)
0809aae5 +0x91:  call   08ae3750 <_Unwind_Resume>
0809aaea +0x96:  add    $0x30,%esp
0809aaed +0x99:  pop    %ebx
0809aaee +0x9a:  pop    %esi
0809aaef +0x9b:  pop    %ebp
0809aaf0 +0x9c:  ret
0809aaf1 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoKhazad::CNCryptoKhazad @ 0x809aa54

/* CNCryptoKhazad::CNCryptoKhazad() */

void __thiscall CNCryptoKhazad::CNCryptoKhazad(CNCryptoKhazad *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,9);
  *(undefined ***)this = &PTR__CNCryptoKhazad_08b13808;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809aa89 to 0809aacc has its CatchHandler @ 0809aacf */
  local_10 = operator_new(0x90);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}
```
