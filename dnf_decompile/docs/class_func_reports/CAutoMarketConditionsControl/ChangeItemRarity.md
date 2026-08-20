# ChangeItemRarity

`_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id`

`CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f8c8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8c8c  _ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id
#           CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)
# range [0x082f8c8c, 0x082f8f3e]
082f8c8c +0x000:  push   %ebp
082f8c8d +0x001:  mov    %esp,%ebp
082f8c8f +0x003:  push   %edi
082f8c90 +0x004:  push   %esi
082f8c91 +0x005:  push   %ebx
082f8c92 +0x006:  sub    $0xac,%esp
082f8c98 +0x00c:  mov    0x18(%ebp),%eax
082f8c9b +0x00f:  mov    %eax,-0x50(%ebp)
082f8c9e +0x012:  mov    0x1c(%ebp),%eax
082f8ca1 +0x015:  mov    %eax,-0x4c(%ebp)
082f8ca4 +0x018:  mov    0x8(%ebp),%eax
082f8ca7 +0x01b:  mov    0x380(%eax),%eax
082f8cad +0x021:  test   %eax,%eax
082f8caf +0x023:  je     082f8f2f <+0x2a3>
082f8cb5 +0x029:  mov    &_ZZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_idE8logCount,%ecx
082f8cbb +0x02f:  mov    $0x10624dd3,%edx
082f8cc0 +0x034:  mov    %ecx,%eax
082f8cc2 +0x036:  imul   %edx
082f8cc4 +0x038:  sar    $0x6,%edx
082f8cc7 +0x03b:  mov    %ecx,%eax
082f8cc9 +0x03d:  sar    $0x1f,%eax
082f8ccc +0x040:  mov    %edx,%ebx
082f8cce +0x042:  sub    %eax,%ebx
082f8cd0 +0x044:  mov    %ebx,%eax
082f8cd2 +0x046:  imul   $0x3e8,%eax,%eax
082f8cd8 +0x04c:  mov    %ecx,%edx
082f8cda +0x04e:  sub    %eax,%edx
082f8cdc +0x050:  mov    %edx,%eax
082f8cde +0x052:  test   %eax,%eax
082f8ce0 +0x054:  sete   %al
082f8ce3 +0x057:  lea    0x1(%ecx),%edx
082f8ce6 +0x05a:  mov    %edx,&_ZZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_idE8logCount
082f8cec +0x060:  test   %al,%al
082f8cee +0x062:  je     082f8db0 <+0x124>
082f8cf4 +0x068:  mov    0x10(%ebp),%eax
082f8cf7 +0x06b:  add    $0xc,%eax
082f8cfa +0x06e:  mov    (%eax),%edi
082f8cfc +0x070:  mov    0x10(%ebp),%eax
082f8cff +0x073:  add    $0x8,%eax
082f8d02 +0x076:  mov    (%eax),%eax
082f8d04 +0x078:  mov    %eax,-0x70(%ebp)
082f8d07 +0x07b:  mov    0x10(%ebp),%eax
082f8d0a +0x07e:  add    $0x4,%eax
082f8d0d +0x081:  mov    (%eax),%eax
082f8d0f +0x083:  mov    %eax,-0x6c(%ebp)
082f8d12 +0x086:  mov    0x10(%ebp),%eax
082f8d15 +0x089:  mov    (%eax),%eax
082f8d17 +0x08b:  mov    %eax,-0x68(%ebp)
082f8d1a +0x08e:  mov    0xc(%ebp),%eax
082f8d1d +0x091:  add    $0xc,%eax
082f8d20 +0x094:  mov    (%eax),%eax
082f8d22 +0x096:  mov    %eax,-0x64(%ebp)
082f8d25 +0x099:  mov    0xc(%ebp),%eax
082f8d28 +0x09c:  add    $0x8,%eax
082f8d2b +0x09f:  mov    (%eax),%eax
082f8d2d +0x0a1:  mov    %eax,-0x60(%ebp)
082f8d30 +0x0a4:  mov    0xc(%ebp),%eax
082f8d33 +0x0a7:  add    $0x4,%eax
082f8d36 +0x0aa:  mov    (%eax),%esi
082f8d38 +0x0ac:  mov    0xc(%ebp),%eax
082f8d3b +0x0af:  mov    (%eax),%ebx
082f8d3d +0x0b1:  movl   $0x0,0xc(%esp)
082f8d45 +0x0b9:  movl   $0xf4,0x8(%esp)
082f8d4d +0x0c1:  movl   $&_ZZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_idE19__PRETTY_FUNCTION__,0x4(%esp)
082f8d55 +0x0c9:  lea    -0x44(%ebp),%eax
082f8d58 +0x0cc:  mov    %eax,(%esp)
082f8d5b +0x0cf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f8d60 +0x0d4:  fldl   -0x50(%ebp)
082f8d63 +0x0d7:  fstpl  0x2c(%esp)
082f8d67 +0x0db:  mov    0x14(%ebp),%eax
082f8d6a +0x0de:  mov    %eax,0x28(%esp)
082f8d6e +0x0e2:  mov    %edi,0x24(%esp)
082f8d72 +0x0e6:  mov    -0x70(%ebp),%ecx
082f8d75 +0x0e9:  mov    %ecx,0x20(%esp)
082f8d79 +0x0ed:  mov    -0x6c(%ebp),%eax
082f8d7c +0x0f0:  mov    %eax,0x1c(%esp)
082f8d80 +0x0f4:  mov    -0x68(%ebp),%edx
082f8d83 +0x0f7:  mov    %edx,0x18(%esp)
082f8d87 +0x0fb:  mov    -0x64(%ebp),%ecx
082f8d8a +0x0fe:  mov    %ecx,0x14(%esp)
082f8d8e +0x102:  mov    -0x60(%ebp),%eax
082f8d91 +0x105:  mov    %eax,0x10(%esp)
082f8d95 +0x109:  mov    %esi,0xc(%esp)
082f8d99 +0x10d:  mov    %ebx,0x8(%esp)
082f8d9d +0x111:  movl   $"ChangeItemRarity itemRarity[%d,%d,%d,%d], outItemRarity[%d,%d,%d,%d], itemRaritySize(%d), controlRarity(%lf)",0x4(%esp)
082f8da5 +0x119:  lea    -0x44(%ebp),%eax
082f8da8 +0x11c:  mov    %eax,(%esp)
082f8dab +0x11f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f8db0 +0x124:  movl   $0x0,-0x24(%ebp)
082f8db7 +0x12b:  movl   $0x0,-0x20(%ebp)
082f8dbe +0x132:  movl   $0x2,-0x20(%ebp)
082f8dc5 +0x139:  jmp    082f8de1 <+0x155>
082f8dc7 +0x13b:  mov    -0x20(%ebp),%eax
082f8dca +0x13e:  shl    $0x2,%eax
082f8dcd +0x141:  add    0x10(%ebp),%eax
082f8dd0 +0x144:  mov    -0x20(%ebp),%edx
082f8dd3 +0x147:  shl    $0x2,%edx
082f8dd6 +0x14a:  add    0xc(%ebp),%edx
082f8dd9 +0x14d:  mov    (%edx),%edx
082f8ddb +0x14f:  mov    %edx,(%eax)
082f8ddd +0x151:  addl   $0x1,-0x20(%ebp)
082f8de1 +0x155:  cmpl   $0x5,-0x20(%ebp)
082f8de5 +0x159:  setle  %al
082f8de8 +0x15c:  test   %al,%al
082f8dea +0x15e:  jne    082f8dc7 <+0x13b>
082f8dec +0x160:  movl   $0x2,-0x20(%ebp)
082f8df3 +0x167:  jmp    082f8e74 <+0x1e8>
082f8df5 +0x169:  mov    -0x20(%ebp),%eax
082f8df8 +0x16c:  add    $0x1,%eax
082f8dfb +0x16f:  shl    $0x2,%eax
082f8dfe +0x172:  add    0xc(%ebp),%eax
082f8e01 +0x175:  mov    (%eax),%edx
082f8e03 +0x177:  mov    -0x20(%ebp),%eax
082f8e06 +0x17a:  shl    $0x2,%eax
082f8e09 +0x17d:  add    0xc(%ebp),%eax
082f8e0c +0x180:  mov    (%eax),%eax
082f8e0e +0x182:  mov    %edx,%ecx
082f8e10 +0x184:  sub    %eax,%ecx
082f8e12 +0x186:  mov    %ecx,%eax
082f8e14 +0x188:  mov    %eax,-0x1c(%ebp)
082f8e17 +0x18b:  fildl  -0x1c(%ebp)
082f8e1a +0x18e:  fmull  -0x50(%ebp)
082f8e1d +0x191:  fnstcw -0x52(%ebp)
082f8e20 +0x194:  movzwl -0x52(%ebp),%eax
082f8e24 +0x198:  mov    $0xc,%ah
082f8e26 +0x19a:  mov    %ax,-0x54(%ebp)
082f8e2a +0x19e:  fldcw  -0x54(%ebp)
082f8e2d +0x1a1:  fistpl -0x58(%ebp)
082f8e30 +0x1a4:  fldcw  -0x52(%ebp)
082f8e33 +0x1a7:  mov    -0x58(%ebp),%eax
082f8e36 +0x1aa:  add    %eax,-0x24(%ebp)
082f8e39 +0x1ad:  mov    -0x20(%ebp),%eax
082f8e3c +0x1b0:  shl    $0x2,%eax
082f8e3f +0x1b3:  add    0x10(%ebp),%eax
082f8e42 +0x1b6:  mov    -0x20(%ebp),%edx
082f8e45 +0x1b9:  shl    $0x2,%edx
082f8e48 +0x1bc:  add    0xc(%ebp),%edx
082f8e4b +0x1bf:  mov    (%edx),%edx
082f8e4d +0x1c1:  sub    -0x24(%ebp),%edx
082f8e50 +0x1c4:  mov    %edx,(%eax)
082f8e52 +0x1c6:  mov    -0x20(%ebp),%eax
082f8e55 +0x1c9:  shl    $0x2,%eax
082f8e58 +0x1cc:  add    0x10(%ebp),%eax
082f8e5b +0x1cf:  mov    (%eax),%eax
082f8e5d +0x1d1:  test   %eax,%eax
082f8e5f +0x1d3:  jns    082f8e70 <+0x1e4>
082f8e61 +0x1d5:  mov    -0x20(%ebp),%eax
082f8e64 +0x1d8:  shl    $0x2,%eax
082f8e67 +0x1db:  add    0x10(%ebp),%eax
082f8e6a +0x1de:  movl   $0x0,(%eax)
082f8e70 +0x1e4:  subl   $0x1,-0x20(%ebp)
082f8e74 +0x1e8:  mov    -0x20(%ebp),%eax
082f8e77 +0x1eb:  not    %eax
082f8e79 +0x1ed:  shr    $0x1f,%eax
082f8e7c +0x1f0:  test   %al,%al
082f8e7e +0x1f2:  jne    082f8df5 <+0x169>
082f8e84 +0x1f8:  mov    &_ZZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_idE9logCount2,%ecx
082f8e8a +0x1fe:  mov    $0x10624dd3,%edx
082f8e8f +0x203:  mov    %ecx,%eax
082f8e91 +0x205:  imul   %edx
082f8e93 +0x207:  sar    $0x6,%edx
082f8e96 +0x20a:  mov    %ecx,%eax
082f8e98 +0x20c:  sar    $0x1f,%eax
082f8e9b +0x20f:  mov    %edx,%ebx
082f8e9d +0x211:  sub    %eax,%ebx
082f8e9f +0x213:  mov    %ebx,%eax
082f8ea1 +0x215:  imul   $0x3e8,%eax,%eax
082f8ea7 +0x21b:  mov    %ecx,%edx
082f8ea9 +0x21d:  sub    %eax,%edx
082f8eab +0x21f:  mov    %edx,%eax
082f8ead +0x221:  test   %eax,%eax
082f8eaf +0x223:  sete   %al
082f8eb2 +0x226:  lea    0x1(%ecx),%edx
082f8eb5 +0x229:  mov    %edx,&_ZZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_idE9logCount2
082f8ebb +0x22f:  test   %al,%al
082f8ebd +0x231:  je     082f8f28 <+0x29c>
082f8ebf +0x233:  mov    0x10(%ebp),%eax
082f8ec2 +0x236:  add    $0xc,%eax
082f8ec5 +0x239:  mov    (%eax),%eax
082f8ec7 +0x23b:  mov    %eax,-0x5c(%ebp)
082f8eca +0x23e:  mov    0x10(%ebp),%eax
082f8ecd +0x241:  add    $0x8,%eax
082f8ed0 +0x244:  mov    (%eax),%edi
082f8ed2 +0x246:  mov    0x10(%ebp),%eax
082f8ed5 +0x249:  add    $0x4,%eax
082f8ed8 +0x24c:  mov    (%eax),%esi
082f8eda +0x24e:  mov    0x10(%ebp),%eax
082f8edd +0x251:  mov    (%eax),%ebx
082f8edf +0x253:  movl   $0x0,0xc(%esp)
082f8ee7 +0x25b:  movl   $0x114,0x8(%esp)
082f8eef +0x263:  movl   $&_ZZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_idE19__PRETTY_FUNCTION__,0x4(%esp)
082f8ef7 +0x26b:  lea    -0x34(%ebp),%eax
082f8efa +0x26e:  mov    %eax,(%esp)
082f8efd +0x271:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f8f02 +0x276:  mov    -0x5c(%ebp),%ecx
082f8f05 +0x279:  mov    %ecx,0x14(%esp)
082f8f09 +0x27d:  mov    %edi,0x10(%esp)
082f8f0d +0x281:  mov    %esi,0xc(%esp)
082f8f11 +0x285:  mov    %ebx,0x8(%esp)
082f8f15 +0x289:  movl   $"ChangeItemRarity outItemRarity[%d,%d,%d,%d]",0x4(%esp)
082f8f1d +0x291:  lea    -0x34(%ebp),%eax
082f8f20 +0x294:  mov    %eax,(%esp)
082f8f23 +0x297:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f8f28 +0x29c:  mov    $0x1,%eax
082f8f2d +0x2a1:  jmp    082f8f34 <+0x2a8>
082f8f2f +0x2a3:  mov    $0x0,%eax
082f8f34 +0x2a8:  add    $0xac,%esp
082f8f3a +0x2ae:  pop    %ebx
082f8f3b +0x2af:  pop    %esi
082f8f3c +0x2b0:  pop    %edi
082f8f3d +0x2b1:  pop    %ebp
082f8f3e +0x2b2:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControl::ChangeItemRarity @ 0x82f8c8c

/* CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double) */

undefined4
CAutoMarketConditionsControl::ChangeItemRarity(int *param_1,int *param_2,int param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 in_stack_00000018;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  if (param_1[0xe0] == 0) {
    uVar8 = 0;
  }
  else {
    bVar9 = ChangeItemRarity(int*,int*,int,double)::logCount ==
            (ChangeItemRarity(int*,int*,int,double)::logCount / 1000) * 1000;
    ChangeItemRarity(int*,int*,int,double)::logCount =
         ChangeItemRarity(int*,int*,int,double)::logCount + 1;
    if (bVar9) {
      uVar8 = *(undefined4 *)(param_3 + 0xc);
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar2 = *(undefined4 *)(param_3 + 4);
      uVar3 = *(undefined4 *)param_3;
      iVar4 = param_2[3];
      iVar5 = param_2[2];
      iVar6 = param_2[1];
      iVar7 = *param_2;
      cMyTrace::cMyTrace(local_48,
                         "bool CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)"
                         ,0xf4,0);
      cMyTrace::operator()
                (local_48,
                 "ChangeItemRarity itemRarity[%d,%d,%d,%d], outItemRarity[%d,%d,%d,%d], itemRaritySize(%d), controlRarity(%lf)"
                 ,iVar7,iVar6,iVar5,iVar4,uVar3,uVar2,uVar1,uVar8,param_4._0_4_,
                 CONCAT44(in_stack_00000018,param_4._4_4_));
    }
    local_28 = 0;
    for (local_24 = 2; local_24 < 6; local_24 = local_24 + 1) {
      *(int *)(local_24 * 4 + param_3) = param_2[local_24];
    }
    for (local_24 = 2; -1 < local_24; local_24 = local_24 + -1) {
      local_20 = param_2[local_24 + 1] - param_2[local_24];
      local_28 = local_28 +
                 (int)ROUND((double)local_20 * (double)CONCAT44(in_stack_00000018,param_4._4_4_));
      *(int *)(local_24 * 4 + param_3) = param_2[local_24] - local_28;
      if (*(int *)(local_24 * 4 + param_3) < 0) {
        *(undefined4 *)(local_24 * 4 + param_3) = 0;
      }
    }
    bVar9 = ChangeItemRarity(int*,int*,int,double)::logCount2 ==
            (ChangeItemRarity(int*,int*,int,double)::logCount2 / 1000) * 1000;
    ChangeItemRarity(int*,int*,int,double)::logCount2 =
         ChangeItemRarity(int*,int*,int,double)::logCount2 + 1;
    if (bVar9) {
      uVar8 = *(undefined4 *)(param_3 + 0xc);
      uVar1 = *(undefined4 *)(param_3 + 8);
      uVar2 = *(undefined4 *)(param_3 + 4);
      uVar3 = *(undefined4 *)param_3;
      cMyTrace::cMyTrace(local_38,
                         "bool CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)"
                         ,0x114,0);
      cMyTrace::operator()
                (local_38,"ChangeItemRarity outItemRarity[%d,%d,%d,%d]",uVar3,uVar2,uVar1,uVar8);
    }
    uVar8 = 1;
  }
  return uVar8;
}
```
