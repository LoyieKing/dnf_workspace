# Initialize

`_ZN8TaoCrypt2DH10InitializeERNS_6SourceE`

`TaoCrypt::DH::Initialize(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH` | `0x087a8790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8790  _ZN8TaoCrypt2DH10InitializeERNS_6SourceE
#           TaoCrypt::DH::Initialize(TaoCrypt::Source&)
# range [0x087a8790, 0x087a87cc]
087a8790 +0x00:  push   %ebp
087a8791 +0x01:  mov    %esp,%ebp
087a8793 +0x03:  push   %ebx
087a8794 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087a8799 +0x09:  add    $0xbc43ff,%ebx
087a879f +0x0f:  sub    $0x24,%esp
087a87a2 +0x12:  mov    0xc(%ebp),%eax
087a87a5 +0x15:  mov    %eax,-0xc(%ebp)
087a87a8 +0x18:  mov    -0x27c(%ebx),%eax
087a87ae +0x1e:  add    $0x8,%eax
087a87b1 +0x21:  mov    %eax,-0x10(%ebp)
087a87b4 +0x24:  mov    0x8(%ebp),%eax
087a87b7 +0x27:  mov    %eax,0x4(%esp)
087a87bb +0x2b:  lea    -0x10(%ebp),%eax
087a87be +0x2e:  mov    %eax,(%esp)
087a87c1 +0x31:  call   08755620 <_ZN8TaoCrypt10DH_Decoder6DecodeERNS_2DHE>  ; TaoCrypt::DH_Decoder::Decode(TaoCrypt::DH&)
087a87c6 +0x36:  add    $0x24,%esp
087a87c9 +0x39:  pop    %ebx
087a87ca +0x3a:  pop    %ebp
087a87cb +0x3b:  ret
087a87cc +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DH::Initialize @ 0x87a8790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DH::Initialize(DH *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x87a8799;
  local_10 = param_1;
  local_14 = PTR_vtable_0936c91c + 8;
  DH_Decoder::Decode((DH_Decoder *)&local_14,this);
  return;
}
```
