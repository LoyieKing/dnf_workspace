# DH

`_ZN8TaoCrypt2DHC1ERNS_6SourceE`

`TaoCrypt::DH::DH(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH` | `0x087a87d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a87d0  _ZN8TaoCrypt2DHC1ERNS_6SourceE
#           TaoCrypt::DH::DH(TaoCrypt::Source&)
# range [0x087a87d0, 0x087a8819]
087a87d0 +0x00:  push   %ebp
087a87d1 +0x01:  mov    %esp,%ebp
087a87d3 +0x03:  sub    $0x18,%esp
087a87d6 +0x06:  mov    %ebx,-0x8(%ebp)
087a87d9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087a87de +0x0e:  add    $0xbc43ba,%ebx
087a87e4 +0x14:  mov    %esi,-0x4(%ebp)
087a87e7 +0x17:  mov    0x8(%ebp),%esi
087a87ea +0x1a:  mov    %esi,(%esp)
087a87ed +0x1d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a87f2 +0x22:  lea    0x10(%esi),%eax
087a87f5 +0x25:  mov    %eax,(%esp)
087a87f8 +0x28:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a87fd +0x2d:  mov    0xc(%ebp),%eax
087a8800 +0x30:  mov    %esi,(%esp)
087a8803 +0x33:  mov    %eax,0x4(%esp)
087a8807 +0x37:  call   087a8790 <_ZN8TaoCrypt2DH10InitializeERNS_6SourceE>  ; TaoCrypt::DH::Initialize(TaoCrypt::Source&)
087a880c +0x3c:  mov    -0x8(%ebp),%ebx
087a880f +0x3f:  mov    -0x4(%ebp),%esi
087a8812 +0x42:  mov    %ebp,%esp
087a8814 +0x44:  pop    %ebp
087a8815 +0x45:  ret
087a8816 +0x46:  lea    0x0(%esi),%esi
087a8819 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::DH::DH @ 0x87a87d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::DH(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DH::DH(DH *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Initialize(this,param_1);
  return;
}
```
