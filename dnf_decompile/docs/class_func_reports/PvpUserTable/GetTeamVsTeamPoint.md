# GetTeamVsTeamPoint

`_ZN12PvpUserTable18GetTeamVsTeamPointEii`

`PvpUserTable::GetTeamVsTeamPoint(int, int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4d5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4d5e  _ZN12PvpUserTable18GetTeamVsTeamPointEii
#           PvpUserTable::GetTeamVsTeamPoint(int, int)
# range [0x085d4d5e, 0x085d4fc9]
085d4d5e +0x000:  push   %ebp
085d4d5f +0x001:  mov    %esp,%ebp
085d4d61 +0x003:  push   %esi
085d4d62 +0x004:  push   %ebx
085d4d63 +0x005:  sub    $0x60,%esp
085d4d66 +0x008:  mov    0xc(%ebp),%eax
085d4d69 +0x00b:  mov    %eax,0x4(%esp)
085d4d6d +0x00f:  mov    0x8(%ebp),%eax
085d4d70 +0x012:  mov    %eax,(%esp)
085d4d73 +0x015:  call   085d4a50 <_ZN12PvpUserTable16GetTeamUserCountEi>  ; PvpUserTable::GetTeamUserCount(int)
085d4d78 +0x01a:  mov    %eax,-0x28(%ebp)
085d4d7b +0x01d:  mov    0x10(%ebp),%eax
085d4d7e +0x020:  mov    %eax,0x4(%esp)
085d4d82 +0x024:  mov    0x8(%ebp),%eax
085d4d85 +0x027:  mov    %eax,(%esp)
085d4d88 +0x02a:  call   085d4a50 <_ZN12PvpUserTable16GetTeamUserCountEi>  ; PvpUserTable::GetTeamUserCount(int)
085d4d8d +0x02f:  mov    %eax,-0x24(%ebp)
085d4d90 +0x032:  cmpl   $0x0,-0x28(%ebp)
085d4d94 +0x036:  je     085d4d9c <+0x3e>
085d4d96 +0x038:  cmpl   $0x0,-0x24(%ebp)
085d4d9a +0x03c:  jne    085d4da6 <+0x48>
085d4d9c +0x03e:  mov    $0x0,%eax
085d4da1 +0x043:  jmp    085d4fc2 <+0x264>
085d4da6 +0x048:  mov    0xc(%ebp),%edx
085d4da9 +0x04b:  mov    0x8(%ebp),%eax
085d4dac +0x04e:  shl    $0x6,%edx
085d4daf +0x051:  add    %edx,%eax
085d4db1 +0x053:  add    $0x120,%eax
085d4db6 +0x058:  movzbl 0x4(%eax),%eax
085d4dba +0x05c:  xor    $0x1,%eax
085d4dbd +0x05f:  test   %al,%al
085d4dbf +0x061:  je     085d4dcb <+0x6d>
085d4dc1 +0x063:  mov    $0x0,%eax
085d4dc6 +0x068:  jmp    085d4fc2 <+0x264>
085d4dcb +0x06d:  mov    0xc(%ebp),%edx
085d4dce +0x070:  mov    0x8(%ebp),%eax
085d4dd1 +0x073:  lea    0x40(%edx),%ecx
085d4dd4 +0x076:  mov    $0x0,%edx
085d4dd9 +0x07b:  mov    %edx,(%eax,%ecx,4)
085d4ddc +0x07e:  mov    0x10(%ebp),%edx
085d4ddf +0x081:  mov    0x8(%ebp),%eax
085d4de2 +0x084:  lea    0x40(%edx),%ecx
085d4de5 +0x087:  mov    $0x0,%edx
085d4dea +0x08c:  mov    %edx,(%eax,%ecx,4)
085d4ded +0x08f:  movl   $0x0,-0x18(%ebp)
085d4df4 +0x096:  jmp    085d4e60 <+0x102>
085d4df6 +0x098:  mov    0xc(%ebp),%ecx
085d4df9 +0x09b:  mov    -0x18(%ebp),%edx
085d4dfc +0x09e:  mov    0x8(%ebp),%eax
085d4dff +0x0a1:  shl    $0x3,%ecx
085d4e02 +0x0a4:  lea    (%ecx,%edx,1),%edx
085d4e05 +0x0a7:  add    $0x24,%edx
085d4e08 +0x0aa:  mov    (%eax,%edx,8),%eax
085d4e0b +0x0ad:  mov    %eax,-0x14(%ebp)
085d4e0e +0x0b0:  mov    -0x14(%ebp),%eax
085d4e11 +0x0b3:  mov    %eax,0x10(%esp)
085d4e15 +0x0b7:  mov    0x10(%ebp),%eax
085d4e18 +0x0ba:  mov    %eax,0xc(%esp)
085d4e1c +0x0be:  mov    0xc(%ebp),%eax
085d4e1f +0x0c1:  mov    %eax,0x8(%esp)
085d4e23 +0x0c5:  mov    -0x18(%ebp),%eax
085d4e26 +0x0c8:  mov    %eax,0x4(%esp)
085d4e2a +0x0cc:  mov    0x8(%ebp),%eax
085d4e2d +0x0cf:  mov    %eax,(%esp)
085d4e30 +0x0d2:  call   085dfddc <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x663>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x663
085d4e35 +0x0d7:  mov    -0x14(%ebp),%eax
085d4e38 +0x0da:  mov    %eax,0x10(%esp)
085d4e3c +0x0de:  mov    0xc(%ebp),%eax
085d4e3f +0x0e1:  mov    %eax,0xc(%esp)
085d4e43 +0x0e5:  mov    0x10(%ebp),%eax
085d4e46 +0x0e8:  mov    %eax,0x8(%esp)
085d4e4a +0x0ec:  mov    -0x18(%ebp),%eax
085d4e4d +0x0ef:  mov    %eax,0x4(%esp)
085d4e51 +0x0f3:  mov    0x8(%ebp),%eax
085d4e54 +0x0f6:  mov    %eax,(%esp)
085d4e57 +0x0f9:  call   085dfddc <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x663>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x663
085d4e5c +0x0fe:  addl   $0x1,-0x18(%ebp)
085d4e60 +0x102:  cmpl   $0x7,-0x18(%ebp)
085d4e64 +0x106:  setle  %al
085d4e67 +0x109:  test   %al,%al
085d4e69 +0x10b:  jne    085d4df6 <+0x98>
085d4e6b +0x10d:  mov    -0x28(%ebp),%eax
085d4e6e +0x110:  cmp    -0x24(%ebp),%eax
085d4e71 +0x113:  jle    085d4eb5 <+0x157>
085d4e73 +0x115:  mov    -0x24(%ebp),%eax
085d4e76 +0x118:  mov    -0x28(%ebp),%edx
085d4e79 +0x11b:  mov    %edx,%ecx
085d4e7b +0x11d:  sub    %eax,%ecx
085d4e7d +0x11f:  mov    %ecx,%eax
085d4e7f +0x121:  mov    %eax,-0x10(%ebp)
085d4e82 +0x124:  movl   $0x0,-0xc(%ebp)
085d4e89 +0x12b:  jmp    085d4ea8 <+0x14a>
085d4e8b +0x12d:  mov    0x10(%ebp),%eax
085d4e8e +0x130:  mov    %eax,0x8(%esp)
085d4e92 +0x134:  mov    0xc(%ebp),%eax
085d4e95 +0x137:  mov    %eax,0x4(%esp)
085d4e99 +0x13b:  mov    0x8(%ebp),%eax
085d4e9c +0x13e:  mov    %eax,(%esp)
085d4e9f +0x141:  call   085d4fca <_ZN12PvpUserTable19GetGhostVsTeamPointEii>  ; PvpUserTable::GetGhostVsTeamPoint(int, int)
085d4ea4 +0x146:  addl   $0x1,-0xc(%ebp)
085d4ea8 +0x14a:  mov    -0xc(%ebp),%eax
085d4eab +0x14d:  cmp    -0x10(%ebp),%eax
085d4eae +0x150:  setl   %al
085d4eb1 +0x153:  test   %al,%al
085d4eb3 +0x155:  jne    085d4e8b <+0x12d>
085d4eb5 +0x157:  mov    0xc(%ebp),%edx
085d4eb8 +0x15a:  mov    0x8(%ebp),%eax
085d4ebb +0x15d:  add    $0x40,%edx
085d4ebe +0x160:  flds   (%eax,%edx,4)
085d4ec1 +0x163:  mov    0x10(%ebp),%edx
085d4ec4 +0x166:  mov    0x8(%ebp),%eax
085d4ec7 +0x169:  add    $0x40,%edx
085d4eca +0x16c:  flds   (%eax,%edx,4)
085d4ecd +0x16f:  faddp  %st,%st(1)
085d4ecf +0x171:  fstps  -0x20(%ebp)
085d4ed2 +0x174:  flds   -0x20(%ebp)
085d4ed5 +0x177:  fldz
085d4ed7 +0x179:  fucompp
085d4ed9 +0x17b:  fnstsw %ax
085d4edb +0x17d:  sahf
085d4edc +0x17e:  setne  %al
085d4edf +0x181:  setp   %dl
085d4ee2 +0x184:  or     %edx,%eax
085d4ee4 +0x186:  xor    $0x1,%eax
085d4ee7 +0x189:  test   %al,%al
085d4ee9 +0x18b:  je     085d4f38 <+0x1da>
085d4eeb +0x18d:  flds   -0x20(%ebp)
085d4eee +0x190:  fstpl  -0x48(%ebp)
085d4ef1 +0x193:  movl   $0x5,0xc(%esp)
085d4ef9 +0x19b:  movl   $0x162,0x8(%esp)
085d4f01 +0x1a3:  movl   $&_ZZN12PvpUserTable18GetTeamVsTeamPointEiiE19__PRETTY_FUNCTION__,0x4(%esp)
085d4f09 +0x1ab:  lea    -0x38(%ebp),%eax
085d4f0c +0x1ae:  mov    %eax,(%esp)
085d4f0f +0x1b1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d4f14 +0x1b6:  fldl   -0x48(%ebp)
085d4f17 +0x1b9:  fstpl  0x8(%esp)
085d4f1b +0x1bd:  movl   $"[FPE][PvpUserTable::GetTeamVsTeamPoint] RatioSum: %f",0x4(%esp)
085d4f23 +0x1c5:  lea    -0x38(%ebp),%eax
085d4f26 +0x1c8:  mov    %eax,(%esp)
085d4f29 +0x1cb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d4f2e +0x1d0:  mov    $0x0,%eax
085d4f33 +0x1d5:  jmp    085d4fc2 <+0x264>
085d4f38 +0x1da:  mov    0x10(%ebp),%edx
085d4f3b +0x1dd:  mov    0x8(%ebp),%eax
085d4f3e +0x1e0:  add    $0x40,%edx
085d4f41 +0x1e3:  flds   (%eax,%edx,4)
085d4f44 +0x1e6:  fdivs  -0x20(%ebp)
085d4f47 +0x1e9:  fstps  -0x1c(%ebp)
085d4f4a +0x1ec:  mov    -0x24(%ebp),%eax
085d4f4d +0x1ef:  mov    -0x28(%ebp),%edx
085d4f50 +0x1f2:  lea    (%edx,%eax,1),%eax
085d4f53 +0x1f5:  mov    %eax,-0x3c(%ebp)
085d4f56 +0x1f8:  fildl  -0x3c(%ebp)
085d4f59 +0x1fb:  flds   -0x1c(%ebp)
085d4f5c +0x1fe:  fmulp  %st,%st(1)
085d4f5e +0x200:  fstps  -0x1c(%ebp)
085d4f61 +0x203:  mov    0xc(%ebp),%ecx
085d4f64 +0x206:  mov    0xc(%ebp),%edx
085d4f67 +0x209:  mov    0xc(%ebp),%esi
085d4f6a +0x20c:  mov    0xc(%ebp),%ebx
085d4f6d +0x20f:  mov    0x8(%ebp),%eax
085d4f70 +0x212:  shl    $0x3,%esi
085d4f73 +0x215:  lea    (%esi,%ebx,1),%ebx
085d4f76 +0x218:  flds   (%eax,%ebx,4)
085d4f79 +0x21b:  fildl  -0x28(%ebp)
085d4f7c +0x21e:  flds   -0x1c(%ebp)
085d4f7f +0x221:  fdivp  %st,%st(1)
085d4f81 +0x223:  faddp  %st,%st(1)
085d4f83 +0x225:  mov    0x8(%ebp),%eax
085d4f86 +0x228:  shl    $0x3,%ecx
085d4f89 +0x22b:  lea    (%ecx,%edx,1),%edx
085d4f8c +0x22e:  fstps  (%eax,%edx,4)
085d4f8f +0x231:  mov    0xc(%ebp),%ecx
085d4f92 +0x234:  mov    0x10(%ebp),%edx
085d4f95 +0x237:  mov    0xc(%ebp),%esi
085d4f98 +0x23a:  mov    0x10(%ebp),%ebx
085d4f9b +0x23d:  mov    0x8(%ebp),%eax
085d4f9e +0x240:  shl    $0x3,%esi
085d4fa1 +0x243:  lea    (%esi,%ebx,1),%ebx
085d4fa4 +0x246:  flds   (%eax,%ebx,4)
085d4fa7 +0x249:  fildl  -0x24(%ebp)
085d4faa +0x24c:  flds   -0x1c(%ebp)
085d4fad +0x24f:  fdivp  %st,%st(1)
085d4faf +0x251:  fsubrp %st,%st(1)
085d4fb1 +0x253:  mov    0x8(%ebp),%eax
085d4fb4 +0x256:  shl    $0x3,%ecx
085d4fb7 +0x259:  lea    (%ecx,%edx,1),%edx
085d4fba +0x25c:  fstps  (%eax,%edx,4)
085d4fbd +0x25f:  mov    $0x1,%eax
085d4fc2 +0x264:  add    $0x60,%esp
085d4fc5 +0x267:  pop    %ebx
085d4fc6 +0x268:  pop    %esi
085d4fc7 +0x269:  pop    %ebp
085d4fc8 +0x26a:  ret
085d4fc9 +0x26b:  nop
```

## 反编译 C

```c
// PvpUserTable::GetTeamVsTeamPoint @ 0x85d4d5e

/* PvpUserTable::GetTeamVsTeamPoint(int, int) */

undefined4 __thiscall PvpUserTable::GetTeamVsTeamPoint(PvpUserTable *this,int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  float local_24;
  int local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  local_2c = GetTeamUserCount(this,param_1);
  local_28 = GetTeamUserCount(this,param_2);
  if ((local_2c == 0) || (local_28 == 0)) {
    uVar3 = 0;
  }
  else if (this[param_1 * 0x40 + 0x124] == (PvpUserTable)0x1) {
    *(undefined4 *)(this + (param_1 + 0x40) * 4) = 0;
    *(undefined4 *)(this + (param_2 + 0x40) * 4) = 0;
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
      local_18 = *(CUser **)(this + (param_1 * 8 + local_1c + 0x24) * 8);
      GetUserVsTeamPoint(this,local_1c,param_1,param_2,local_18);
      GetUserVsTeamPoint(this,local_1c,param_2,param_1,local_18);
    }
    if (local_28 < local_2c) {
      local_14 = local_2c - local_28;
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        GetGhostVsTeamPoint((int)this,param_1);
      }
    }
    local_24 = *(float *)(this + (param_2 + 0x40) * 4) + *(float *)(this + (param_1 + 0x40) * 4);
    if (local_24 == 0.0) {
      dVar1 = (double)local_24;
      cMyTrace::cMyTrace(local_3c,"bool PvpUserTable::GetTeamVsTeamPoint(int, int)",0x162,5);
      cMyTrace::operator()(local_3c,"[FPE][PvpUserTable::GetTeamVsTeamPoint] RatioSum: %f",dVar1);
      uVar3 = 0;
    }
    else {
      fVar2 = (*(float *)(this + (param_2 + 0x40) * 4) / local_24) * (float)(local_2c + local_28);
      *(float *)(this + param_1 * 0x24) =
           fVar2 / (float)local_2c + *(float *)(this + param_1 * 0x24);
      *(float *)(this + (param_1 * 8 + param_2) * 4) =
           *(float *)(this + (param_1 * 8 + param_2) * 4) - fVar2 / (float)local_28;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
