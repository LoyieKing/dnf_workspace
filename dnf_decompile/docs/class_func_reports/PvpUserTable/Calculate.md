# Calculate

`_ZN12PvpUserTable9CalculateEv`

`PvpUserTable::Calculate()`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4bd0  _ZN12PvpUserTable9CalculateEv
#           PvpUserTable::Calculate()
# range [0x085d4bd0, 0x085d4d5d]
085d4bd0 +0x000:  push   %ebp
085d4bd1 +0x001:  mov    %esp,%ebp
085d4bd3 +0x003:  push   %ebx
085d4bd4 +0x004:  sub    $0x34,%esp
085d4bd7 +0x007:  mov    0x8(%ebp),%eax
085d4bda +0x00a:  movl   $0x100,0x8(%esp)
085d4be2 +0x012:  movl   $0x0,0x4(%esp)
085d4bea +0x01a:  mov    %eax,(%esp)
085d4bed +0x01d:  call   0807dcc0 <_init+0x5b8>
085d4bf2 +0x022:  mov    0x8(%ebp),%eax
085d4bf5 +0x025:  add    $0x100,%eax
085d4bfa +0x02a:  movl   $0x20,0x8(%esp)
085d4c02 +0x032:  movl   $0x0,0x4(%esp)
085d4c0a +0x03a:  mov    %eax,(%esp)
085d4c0d +0x03d:  call   0807dcc0 <_init+0x5b8>
085d4c12 +0x042:  mov    0x8(%ebp),%eax
085d4c15 +0x045:  mov    %eax,(%esp)
085d4c18 +0x048:  call   085d57c2 <_ZN12PvpUserTable8CheckDanEv>  ; PvpUserTable::CheckDan()
085d4c1d +0x04d:  movl   $0x0,-0x20(%ebp)
085d4c24 +0x054:  jmp    085d4c78 <+0xa8>
085d4c26 +0x056:  mov    -0x20(%ebp),%eax
085d4c29 +0x059:  mov    %eax,0x4(%esp)
085d4c2d +0x05d:  mov    0x8(%ebp),%eax
085d4c30 +0x060:  mov    %eax,(%esp)
085d4c33 +0x063:  call   085d585e <_ZN12PvpUserTable10SetWinTeamEi>  ; PvpUserTable::SetWinTeam(int)
085d4c38 +0x068:  movl   $0x0,-0x1c(%ebp)
085d4c3f +0x06f:  jmp    085d4c69 <+0x99>
085d4c41 +0x071:  mov    -0x20(%ebp),%eax
085d4c44 +0x074:  cmp    -0x1c(%ebp),%eax
085d4c47 +0x077:  je     085d4c64 <+0x94>
085d4c49 +0x079:  mov    -0x1c(%ebp),%eax
085d4c4c +0x07c:  mov    %eax,0x8(%esp)
085d4c50 +0x080:  mov    -0x20(%ebp),%eax
085d4c53 +0x083:  mov    %eax,0x4(%esp)
085d4c57 +0x087:  mov    0x8(%ebp),%eax
085d4c5a +0x08a:  mov    %eax,(%esp)
085d4c5d +0x08d:  call   085d4d5e <_ZN12PvpUserTable18GetTeamVsTeamPointEii>  ; PvpUserTable::GetTeamVsTeamPoint(int, int)
085d4c62 +0x092:  jmp    085d4c65 <+0x95>
085d4c64 +0x094:  nop
085d4c65 +0x095:  addl   $0x1,-0x1c(%ebp)
085d4c69 +0x099:  cmpl   $0x7,-0x1c(%ebp)
085d4c6d +0x09d:  setle  %al
085d4c70 +0x0a0:  test   %al,%al
085d4c72 +0x0a2:  jne    085d4c41 <+0x71>
085d4c74 +0x0a4:  addl   $0x1,-0x20(%ebp)
085d4c78 +0x0a8:  cmpl   $0x7,-0x20(%ebp)
085d4c7c +0x0ac:  setle  %al
085d4c7f +0x0af:  test   %al,%al
085d4c81 +0x0b1:  jne    085d4c26 <+0x56>
085d4c83 +0x0b3:  movl   $0x0,-0x18(%ebp)
085d4c8a +0x0ba:  jmp    085d4cff <+0x12f>
085d4c8c +0x0bc:  mov    -0x18(%ebp),%edx
085d4c8f +0x0bf:  mov    0x8(%ebp),%eax
085d4c92 +0x0c2:  lea    0xc8(%edx),%ecx
085d4c98 +0x0c8:  mov    $0x0,%edx
085d4c9d +0x0cd:  mov    %edx,0x4(%eax,%ecx,4)
085d4ca1 +0x0d1:  movl   $0x0,-0x14(%ebp)
085d4ca8 +0x0d8:  jmp    085d4cf0 <+0x120>
085d4caa +0x0da:  mov    -0x18(%ebp),%ebx
085d4cad +0x0dd:  mov    -0x14(%ebp),%edx
085d4cb0 +0x0e0:  mov    -0x18(%ebp),%eax
085d4cb3 +0x0e3:  shl    $0x3,%edx
085d4cb6 +0x0e6:  lea    (%edx,%eax,1),%eax
085d4cb9 +0x0e9:  shl    $0x2,%eax
085d4cbc +0x0ec:  add    0x8(%ebp),%eax
085d4cbf +0x0ef:  mov    -0x18(%ebp),%edx
085d4cc2 +0x0f2:  add    $0xc8,%edx
085d4cc8 +0x0f8:  shl    $0x2,%edx
085d4ccb +0x0fb:  add    0x8(%ebp),%edx
085d4cce +0x0fe:  add    $0x4,%edx
085d4cd1 +0x101:  mov    %eax,0x4(%esp)
085d4cd5 +0x105:  mov    %edx,(%esp)
085d4cd8 +0x108:  call   085dfea1 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x728>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x728
085d4cdd +0x10d:  mov    (%eax),%edx
085d4cdf +0x10f:  mov    0x8(%ebp),%eax
085d4ce2 +0x112:  lea    0xc8(%ebx),%ecx
085d4ce8 +0x118:  mov    %edx,0x4(%eax,%ecx,4)
085d4cec +0x11c:  addl   $0x1,-0x14(%ebp)
085d4cf0 +0x120:  cmpl   $0x7,-0x14(%ebp)
085d4cf4 +0x124:  setle  %al
085d4cf7 +0x127:  test   %al,%al
085d4cf9 +0x129:  jne    085d4caa <+0xda>
085d4cfb +0x12b:  addl   $0x1,-0x18(%ebp)
085d4cff +0x12f:  cmpl   $0x7,-0x18(%ebp)
085d4d03 +0x133:  setle  %al
085d4d06 +0x136:  test   %al,%al
085d4d08 +0x138:  jne    085d4c8c <+0xbc>
085d4d0a +0x13a:  movl   $0x0,-0x10(%ebp)
085d4d11 +0x141:  jmp    085d4d48 <+0x178>
085d4d13 +0x143:  movl   $0x0,-0xc(%ebp)
085d4d1a +0x14a:  jmp    085d4d39 <+0x169>
085d4d1c +0x14c:  mov    -0x10(%ebp),%ecx
085d4d1f +0x14f:  mov    -0xc(%ebp),%edx
085d4d22 +0x152:  mov    0x8(%ebp),%eax
085d4d25 +0x155:  shl    $0x3,%ecx
085d4d28 +0x158:  lea    (%ecx,%edx,1),%edx
085d4d2b +0x15b:  add    $0x24,%edx
085d4d2e +0x15e:  movl   $0x0,(%eax,%edx,8)
085d4d35 +0x165:  addl   $0x1,-0xc(%ebp)
085d4d39 +0x169:  cmpl   $0x7,-0xc(%ebp)
085d4d3d +0x16d:  setle  %al
085d4d40 +0x170:  test   %al,%al
085d4d42 +0x172:  jne    085d4d1c <+0x14c>
085d4d44 +0x174:  addl   $0x1,-0x10(%ebp)
085d4d48 +0x178:  cmpl   $0x7,-0x10(%ebp)
085d4d4c +0x17c:  setle  %al
085d4d4f +0x17f:  test   %al,%al
085d4d51 +0x181:  jne    085d4d13 <+0x143>
085d4d53 +0x183:  mov    $0x1,%eax
085d4d58 +0x188:  add    $0x34,%esp
085d4d5b +0x18b:  pop    %ebx
085d4d5c +0x18c:  pop    %ebp
085d4d5d +0x18d:  ret
```

## 反编译 C

```c
// PvpUserTable::Calculate @ 0x85d4bd0

/* PvpUserTable::Calculate() */

undefined4 __thiscall PvpUserTable::Calculate(PvpUserTable *this)

{
  float *pfVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  memset(this,0,0x100);
  memset(this + 0x100,0,0x20);
  CheckDan(this);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    SetWinTeam(this,local_24);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (local_24 != local_20) {
        GetTeamVsTeamPoint(this,local_24,local_20);
      }
    }
  }
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    *(undefined4 *)(this + (local_1c + 200) * 4 + 4) = 0;
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      pfVar1 = std::min<float>((float *)(this + (local_1c + 200) * 4 + 4),
                               (float *)(this + (local_18 * 8 + local_1c) * 4));
      *(float *)(this + (local_1c + 200) * 4 + 4) = *pfVar1;
    }
  }
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      *(undefined4 *)(this + (local_14 * 8 + local_10 + 0x24) * 8) = 0;
    }
  }
  return 1;
}
```
