# CheckHellPartyCondition

`_ZN13CBattle_Field23CheckHellPartyConditionEv`

`CBattle_Field::CheckHellPartyCondition()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082ff988` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ff988  _ZN13CBattle_Field23CheckHellPartyConditionEv
#           CBattle_Field::CheckHellPartyCondition()
# range [0x082ff988, 0x082ffa2d]
082ff988 +0x00:  push   %ebp
082ff989 +0x01:  mov    %esp,%ebp
082ff98b +0x03:  push   %ebx
082ff98c +0x04:  sub    $0x24,%esp
082ff98f +0x07:  mov    0x8(%ebp),%eax
082ff992 +0x0a:  mov    (%eax),%eax
082ff994 +0x0c:  test   %eax,%eax
082ff996 +0x0e:  je     082ffa22 <+0x9a>
082ff99c +0x14:  mov    0x8(%ebp),%eax
082ff99f +0x17:  mov    (%eax),%eax
082ff9a1 +0x19:  flds   0xb0c(%eax)
082ff9a7 +0x1f:  fnstcw -0xa(%ebp)
082ff9aa +0x22:  movzwl -0xa(%ebp),%eax
082ff9ae +0x26:  mov    $0xc,%ah
082ff9b0 +0x28:  mov    %ax,-0xc(%ebp)
082ff9b4 +0x2c:  fldcw  -0xc(%ebp)
082ff9b7 +0x2f:  fistpl -0x10(%ebp)
082ff9ba +0x32:  fldcw  -0xa(%ebp)
082ff9bd +0x35:  mov    -0x10(%ebp),%ebx
082ff9c0 +0x38:  movl   $0x64,(%esp)
082ff9c7 +0x3f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
082ff9cc +0x44:  cmp    %eax,%ebx
082ff9ce +0x46:  jl     082ffa12 <+0x8a>
082ff9d0 +0x48:  mov    0x8(%ebp),%eax
082ff9d3 +0x4b:  mov    (%eax),%eax
082ff9d5 +0x4d:  flds   0xb0c(%eax)
082ff9db +0x53:  fnstcw -0xa(%ebp)
082ff9de +0x56:  movzwl -0xa(%ebp),%eax
082ff9e2 +0x5a:  mov    $0xc,%ah
082ff9e4 +0x5c:  mov    %ax,-0xc(%ebp)
082ff9e8 +0x60:  fldcw  -0xc(%ebp)
082ff9eb +0x63:  fistpl -0x10(%ebp)
082ff9ee +0x66:  fldcw  -0xa(%ebp)
082ff9f1 +0x69:  mov    -0x10(%ebp),%ebx
082ff9f4 +0x6c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ff9f9 +0x71:  mov    %eax,(%esp)
082ff9fc +0x74:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
082ffa01 +0x79:  mov    0x90(%eax),%eax
082ffa07 +0x7f:  cmp    %eax,%ebx
082ffa09 +0x81:  jl     082ffa12 <+0x8a>
082ffa0b +0x83:  mov    $0x1,%eax
082ffa10 +0x88:  jmp    082ffa17 <+0x8f>
082ffa12 +0x8a:  mov    $0x0,%eax
082ffa17 +0x8f:  test   %al,%al
082ffa19 +0x91:  je     082ffa22 <+0x9a>
082ffa1b +0x93:  mov    $0x1,%eax
082ffa20 +0x98:  jmp    082ffa27 <+0x9f>
082ffa22 +0x9a:  mov    $0x0,%eax
082ffa27 +0x9f:  add    $0x24,%esp
082ffa2a +0xa2:  pop    %ebx
082ffa2b +0xa3:  pop    %ebp
082ffa2c +0xa4:  ret
082ffa2d +0xa5:  nop
```

## 反编译 C

```c
// CBattle_Field::CheckHellPartyCondition @ 0x82ff988

/* CBattle_Field::CheckHellPartyCondition() */

undefined4 __thiscall CBattle_Field::CheckHellPartyCondition(CBattle_Field *this)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    return 0;
  }
  fVar1 = *(float *)(*(int *)this + 0xb0c);
  iVar3 = get_rand_int(100);
  if (iVar3 <= (int)ROUND(fVar1)) {
    fVar1 = *(float *)(*(int *)this + 0xb0c);
    G_CDataManager();
    iVar3 = CDataManager::get_hellparty_script_values();
    if (*(int *)(iVar3 + 0x90) <= (int)ROUND(fVar1)) {
      bVar2 = true;
      goto LAB_082ffa17;
    }
  }
  bVar2 = false;
LAB_082ffa17:
  if (!bVar2) {
    return 0;
  }
  return 1;
}
```
