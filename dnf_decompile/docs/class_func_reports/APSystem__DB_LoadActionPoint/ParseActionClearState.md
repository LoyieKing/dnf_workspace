# ParseActionClearState

`_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj`

`APSystem::DB_LoadActionPoint::ParseActionClearState(char*, APSystem::_ActionPoint*, unsigned int)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadActionPoint` | `0x08123f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08123f50  _ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj
#           APSystem::DB_LoadActionPoint::ParseActionClearState(char*, APSystem::_ActionPoint*, unsigned int)
# range [0x08123f50, 0x08124155]
08123f50 +0x000:  push   %ebp
08123f51 +0x001:  mov    %esp,%ebp
08123f53 +0x003:  push   %ebx
08123f54 +0x004:  sub    $0x44,%esp
08123f57 +0x007:  cmpl   $0x0,0xc(%ebp)
08123f5b +0x00b:  je     08123f63 <+0x13>
08123f5d +0x00d:  cmpl   $0x0,0x10(%ebp)
08123f61 +0x011:  jne    08123f6d <+0x1d>
08123f63 +0x013:  mov    $0x0,%eax
08123f68 +0x018:  jmp    08124150 <+0x200>
08123f6d +0x01d:  movl   $0x0,-0x28(%ebp)
08123f74 +0x024:  movl   $0x0,-0x24(%ebp)
08123f7b +0x02b:  lea    -0x28(%ebp),%eax
08123f7e +0x02e:  mov    %eax,0x8(%esp)
08123f82 +0x032:  movl   $"|",0x4(%esp)
08123f8a +0x03a:  mov    0xc(%ebp),%eax
08123f8d +0x03d:  mov    %eax,(%esp)
08123f90 +0x040:  call   0807e150 <_init+0xa48>
08123f95 +0x045:  mov    %eax,-0x24(%ebp)
08123f98 +0x048:  movl   $0x0,-0x20(%ebp)
08123f9f +0x04f:  jmp    08124129 <+0x1d9>
08123fa4 +0x054:  movl   $0x0,-0x2c(%ebp)
08123fab +0x05b:  movl   $0x0,-0x1c(%ebp)
08123fb2 +0x062:  lea    -0x2c(%ebp),%eax
08123fb5 +0x065:  mov    %eax,0x8(%esp)
08123fb9 +0x069:  movl   $",",0x4(%esp)
08123fc1 +0x071:  mov    -0x24(%ebp),%eax
08123fc4 +0x074:  mov    %eax,(%esp)
08123fc7 +0x077:  call   0807e150 <_init+0xa48>
08123fcc +0x07c:  mov    %eax,-0x1c(%ebp)
08123fcf +0x07f:  movl   $0x0,-0x18(%ebp)
08123fd6 +0x086:  movl   $0x0,-0x14(%ebp)
08123fdd +0x08d:  cmpl   $0x0,-0x1c(%ebp)
08123fe1 +0x091:  je     08124022 <+0xd2>
08123fe3 +0x093:  mov    -0x20(%ebp),%edx
08123fe6 +0x096:  mov    %edx,%eax
08123fe8 +0x098:  shl    $0x2,%eax
08123feb +0x09b:  add    %edx,%eax
08123fed +0x09d:  add    %eax,%eax
08123fef +0x09f:  add    %edx,%eax
08123ff1 +0x0a1:  mov    %eax,%ebx
08123ff3 +0x0a3:  add    0x10(%ebp),%ebx
08123ff6 +0x0a6:  mov    -0x1c(%ebp),%eax
08123ff9 +0x0a9:  mov    %eax,(%esp)
08123ffc +0x0ac:  call   0807e6f0 <_init+0xfe8>
08124001 +0x0b1:  mov    %ax,(%ebx)
08124004 +0x0b4:  lea    -0x2c(%ebp),%eax
08124007 +0x0b7:  mov    %eax,0x8(%esp)
0812400b +0x0bb:  movl   $",",0x4(%esp)
08124013 +0x0c3:  movl   $0x0,(%esp)
0812401a +0x0ca:  call   0807e150 <_init+0xa48>
0812401f +0x0cf:  mov    %eax,-0x18(%ebp)
08124022 +0x0d2:  cmpl   $0x0,-0x18(%ebp)
08124026 +0x0d6:  je     08124094 <+0x144>
08124028 +0x0d8:  mov    -0x20(%ebp),%edx
0812402b +0x0db:  mov    %edx,%eax
0812402d +0x0dd:  shl    $0x2,%eax
08124030 +0x0e0:  add    %edx,%eax
08124032 +0x0e2:  add    %eax,%eax
08124034 +0x0e4:  add    %edx,%eax
08124036 +0x0e6:  mov    %eax,%ebx
08124038 +0x0e8:  add    0x10(%ebp),%ebx
0812403b +0x0eb:  mov    -0x18(%ebp),%eax
0812403e +0x0ee:  mov    %eax,(%esp)
08124041 +0x0f1:  call   0807e6f0 <_init+0xfe8>
08124046 +0x0f6:  mov    %eax,0x2(%ebx)
08124049 +0x0f9:  mov    -0x20(%ebp),%edx
0812404c +0x0fc:  mov    %edx,%eax
0812404e +0x0fe:  shl    $0x2,%eax
08124051 +0x101:  add    %edx,%eax
08124053 +0x103:  add    %eax,%eax
08124055 +0x105:  add    %edx,%eax
08124057 +0x107:  add    0x10(%ebp),%eax
0812405a +0x10a:  mov    0x2(%eax),%eax
0812405d +0x10d:  mov    %eax,(%esp)
08124060 +0x110:  call   08894956 <_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE>  ; APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(APSystem::_ActionGroupIndex)
08124065 +0x115:  xor    $0x1,%eax
08124068 +0x118:  test   %al,%al
0812406a +0x11a:  je     08124076 <+0x126>
0812406c +0x11c:  mov    $0x0,%eax
08124071 +0x121:  jmp    08124150 <+0x200>
08124076 +0x126:  lea    -0x2c(%ebp),%eax
08124079 +0x129:  mov    %eax,0x8(%esp)
0812407d +0x12d:  movl   $",",0x4(%esp)
08124085 +0x135:  movl   $0x0,(%esp)
0812408c +0x13c:  call   0807e150 <_init+0xa48>
08124091 +0x141:  mov    %eax,-0x14(%ebp)
08124094 +0x144:  movl   $0x0,-0x10(%ebp)
0812409b +0x14b:  jmp    081240eb <+0x19b>
0812409d +0x14d:  mov    -0x14(%ebp),%eax
081240a0 +0x150:  mov    %eax,(%esp)
081240a3 +0x153:  call   0807e6f0 <_init+0xfe8>
081240a8 +0x158:  mov    %al,-0x9(%ebp)
081240ab +0x15b:  mov    -0x20(%ebp),%edx
081240ae +0x15e:  mov    %edx,%eax
081240b0 +0x160:  shl    $0x2,%eax
081240b3 +0x163:  add    %edx,%eax
081240b5 +0x165:  add    %eax,%eax
081240b7 +0x167:  add    %edx,%eax
081240b9 +0x169:  mov    %eax,%edx
081240bb +0x16b:  add    0x10(%ebp),%edx
081240be +0x16e:  mov    -0x10(%ebp),%eax
081240c1 +0x171:  movzbl -0x9(%ebp),%ecx
081240c5 +0x175:  mov    %cl,0x6(%edx,%eax,1)
081240c9 +0x179:  lea    -0x2c(%ebp),%eax
081240cc +0x17c:  mov    %eax,0x8(%esp)
081240d0 +0x180:  movl   $",",0x4(%esp)
081240d8 +0x188:  movl   $0x0,(%esp)
081240df +0x18f:  call   0807e150 <_init+0xa48>
081240e4 +0x194:  mov    %eax,-0x14(%ebp)
081240e7 +0x197:  addl   $0x1,-0x10(%ebp)
081240eb +0x19b:  cmpl   $0x0,-0x14(%ebp)
081240ef +0x19f:  je     081240fe <+0x1ae>
081240f1 +0x1a1:  cmpl   $0x4,-0x10(%ebp)
081240f5 +0x1a5:  jg     081240fe <+0x1ae>
081240f7 +0x1a7:  mov    $0x1,%eax
081240fc +0x1ac:  jmp    08124103 <+0x1b3>
081240fe +0x1ae:  mov    $0x0,%eax
08124103 +0x1b3:  test   %al,%al
08124105 +0x1b5:  jne    0812409d <+0x14d>
08124107 +0x1b7:  lea    -0x28(%ebp),%eax
0812410a +0x1ba:  mov    %eax,0x8(%esp)
0812410e +0x1be:  movl   $"|",0x4(%esp)
08124116 +0x1c6:  movl   $0x0,(%esp)
0812411d +0x1cd:  call   0807e150 <_init+0xa48>
08124122 +0x1d2:  mov    %eax,-0x24(%ebp)
08124125 +0x1d5:  addl   $0x1,-0x20(%ebp)
08124129 +0x1d9:  cmpl   $0x0,-0x24(%ebp)
0812412d +0x1dd:  je     0812413e <+0x1ee>
0812412f +0x1df:  mov    -0x20(%ebp),%eax
08124132 +0x1e2:  cmp    0x14(%ebp),%eax
08124135 +0x1e5:  jae    0812413e <+0x1ee>
08124137 +0x1e7:  mov    $0x1,%eax
0812413c +0x1ec:  jmp    08124143 <+0x1f3>
0812413e +0x1ee:  mov    $0x0,%eax
08124143 +0x1f3:  test   %al,%al
08124145 +0x1f5:  jne    08123fa4 <+0x54>
0812414b +0x1fb:  mov    $0x1,%eax
08124150 +0x200:  add    $0x44,%esp
08124153 +0x203:  pop    %ebx
08124154 +0x204:  pop    %ebp
08124155 +0x205:  ret
```

## 反编译 C

```c
// APSystem::DB_LoadActionPoint::ParseActionClearState @ 0x8123f50

/* APSystem::DB_LoadActionPoint::ParseActionClearState(char*, APSystem::_ActionPoint*, unsigned int)
    */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::ParseActionClearState
          (DB_LoadActionPoint *this,char *param_1,_ActionPoint *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *local_30;
  char *local_2c;
  char *local_28;
  uint local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  _ActionPoint local_d;
  
  if ((param_1 != (char *)0x0) && (param_2 != (_ActionPoint *)0x0)) {
    local_2c = (char *)0x0;
    local_28 = (char *)0x0;
    local_28 = strtok_r(param_1,"|",&local_2c);
    local_24 = 0;
    while( true ) {
      if ((local_28 == (char *)0x0) || (param_3 <= local_24)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_30 = (char *)0x0;
      local_20 = (char *)0x0;
      local_20 = strtok_r(local_28,",",&local_30);
      local_1c = (char *)0x0;
      local_18 = (char *)0x0;
      if (local_20 != (char *)0x0) {
        iVar4 = local_24 * 0xb;
        iVar3 = atoi(local_20);
        *(short *)(param_2 + iVar4) = (short)iVar3;
        local_1c = strtok_r((char *)0x0,",",&local_30);
      }
      if (local_1c != (char *)0x0) {
        iVar4 = local_24 * 0xb;
        iVar3 = atoi(local_1c);
        *(int *)(param_2 + iVar4 + 2) = iVar3;
        cVar2 = CActionPointEtcParameter::IsValidActionGroupIndex
                          (*(undefined4 *)(param_2 + local_24 * 0xb + 2));
        if (cVar2 != '\x01') {
          return 0;
        }
        local_18 = strtok_r((char *)0x0,",",&local_30);
      }
      local_14 = 0;
      while( true ) {
        if ((local_18 == (char *)0x0) || (4 < local_14)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        iVar4 = atoi(local_18);
        local_d = SUB41(iVar4,0);
        param_2[local_14 + local_24 * 0xb + 6] = local_d;
        local_18 = strtok_r((char *)0x0,",",&local_30);
        local_14 = local_14 + 1;
      }
      local_28 = strtok_r((char *)0x0,"|",&local_2c);
      local_24 = local_24 + 1;
    }
    return 1;
  }
  return 0;
}
```
