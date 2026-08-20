# CNCryptoMulti2

`_ZN14CNCryptoMulti2C1Ev`

`CNCryptoMulti2::CNCryptoMulti2()`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809aff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809aff8  _ZN14CNCryptoMulti2C1Ev
#           CNCryptoMulti2::CNCryptoMulti2()
# range [0x0809aff8, 0x0809b095]
0809aff8 +0x00:  push   %ebp
0809aff9 +0x01:  mov    %esp,%ebp
0809affb +0x03:  push   %esi
0809affc +0x04:  push   %ebx
0809affd +0x05:  sub    $0x40,%esp
0809b000 +0x08:  mov    0x8(%ebp),%eax
0809b003 +0x0b:  movl   $0xc,0x4(%esp)
0809b00b +0x13:  mov    %eax,(%esp)
0809b00e +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809b013 +0x1b:  mov    0x8(%ebp),%eax
0809b016 +0x1e:  movl   $&_ZTV14CNCryptoMulti2+0x8,(%eax)
0809b01c +0x24:  mov    0x8(%ebp),%eax
0809b01f +0x27:  movl   $0x0,0x8(%eax)
0809b026 +0x2e:  movl   $0x24,(%esp)
0809b02d +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809b032 +0x3a:  mov    %eax,-0xc(%ebp)
0809b035 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0809b039 +0x41:  je     0809b08e <+0x96>
0809b03b +0x43:  mov    0x8(%ebp),%eax
0809b03e +0x46:  mov    -0xc(%ebp),%edx
0809b041 +0x49:  mov    %edx,0x8(%eax)
0809b044 +0x4c:  movl   $0x28,0x4(%esp)
0809b04c +0x54:  lea    -0x34(%ebp),%eax
0809b04f +0x57:  mov    %eax,(%esp)
0809b052 +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809b057 +0x5f:  movl   $0x28,0x8(%esp)
0809b05f +0x67:  lea    -0x34(%ebp),%eax
0809b062 +0x6a:  mov    %eax,0x4(%esp)
0809b066 +0x6e:  mov    0x8(%ebp),%eax
0809b069 +0x71:  mov    %eax,(%esp)
0809b06c +0x74:  call   0809b14c <_ZN14CNCryptoMulti210InitializeEPKhi>  ; CNCryptoMulti2::Initialize(unsigned char const*, int)
0809b071 +0x79:  jmp    0809b08e <+0x96>
0809b073 +0x7b:  mov    %edx,%ebx
0809b075 +0x7d:  mov    %eax,%esi
0809b077 +0x7f:  mov    0x8(%ebp),%eax
0809b07a +0x82:  mov    %eax,(%esp)
0809b07d +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809b082 +0x8a:  mov    %esi,%eax
0809b084 +0x8c:  mov    %ebx,%edx
0809b086 +0x8e:  mov    %eax,(%esp)
0809b089 +0x91:  call   08ae3750 <_Unwind_Resume>
0809b08e +0x96:  add    $0x40,%esp
0809b091 +0x99:  pop    %ebx
0809b092 +0x9a:  pop    %esi
0809b093 +0x9b:  pop    %ebp
0809b094 +0x9c:  ret
0809b095 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoMulti2::CNCryptoMulti2 @ 0x809aff8

/* CNCryptoMulti2::CNCryptoMulti2() */

void __thiscall CNCryptoMulti2::CNCryptoMulti2(CNCryptoMulti2 *this)

{
  uchar local_38 [40];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xc);
  *(undefined ***)this = &PTR__CNCryptoMulti2_08b13868;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809b02d to 0809b070 has its CatchHandler @ 0809b073 */
  local_10 = operator_new(0x24);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_38,0x28);
    Initialize(this,local_38,0x28);
  }
  return;
}
```
