# GetInteger

`_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE`

`TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::BER_Decoder` | `0x087544a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087544a0  _ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE
#           TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
# range [0x087544a0, 0x087544df]
087544a0 +0x00:  push   %ebp
087544a1 +0x01:  mov    %esp,%ebp
087544a3 +0x03:  sub    $0x18,%esp
087544a6 +0x06:  mov    0x8(%ebp),%eax
087544a9 +0x09:  mov    %ebx,-0x8(%ebp)
087544ac +0x0c:  mov    %esi,-0x4(%ebp)
087544af +0x0f:  mov    0xc(%ebp),%esi
087544b2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087544b7 +0x17:  add    $0xc186e1,%ebx
087544bd +0x1d:  mov    0x4(%eax),%eax
087544c0 +0x20:  mov    0x10(%eax),%edx
087544c3 +0x23:  test   %edx,%edx
087544c5 +0x25:  jne    087544d3 <+0x33>
087544c7 +0x27:  mov    %eax,0x4(%esp)
087544cb +0x2b:  mov    %esi,(%esp)
087544ce +0x2e:  call   08760280 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE>  ; TaoCrypt::Integer::Decode(TaoCrypt::Source&)
087544d3 +0x33:  mov    %esi,%eax
087544d5 +0x35:  mov    -0x8(%ebp),%ebx
087544d8 +0x38:  mov    -0x4(%ebp),%esi
087544db +0x3b:  mov    %ebp,%esp
087544dd +0x3d:  pop    %ebp
087544de +0x3e:  ret
087544df +0x3f:  nop
```

## 反编译 C

```c
// TaoCrypt::BER_Decoder::GetInteger @ 0x87544a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&) */

Integer * __thiscall TaoCrypt::BER_Decoder::GetInteger(BER_Decoder *this,Integer *param_1)

{
  if (*(int *)(*(Source **)(this + 4) + 0x10) == 0) {
    Integer::Decode(param_1,*(Source **)(this + 4));
  }
  return param_1;
}
```
