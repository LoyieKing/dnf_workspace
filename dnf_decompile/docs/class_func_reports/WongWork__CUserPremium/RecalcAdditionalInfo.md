# RecalcAdditionalInfo

`_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser`

`WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086ae8c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ae8c6  _ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser
#           WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)
# range [0x086ae8c6, 0x086aeca3]
086ae8c6 +0x000:  push   %ebp
086ae8c7 +0x001:  mov    %esp,%ebp
086ae8c9 +0x003:  push   %ebx
086ae8ca +0x004:  sub    $0x34,%esp
086ae8cd +0x007:  mov    0xc(%ebp),%eax
086ae8d0 +0x00a:  mov    %eax,(%esp)
086ae8d3 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086ae8d8 +0x012:  test   %eax,%eax
086ae8da +0x014:  je     086ae8eb <+0x25>
086ae8dc +0x016:  mov    0x8(%ebp),%eax
086ae8df +0x019:  mov    %eax,(%esp)
086ae8e2 +0x01c:  call   0812cda0 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x1c>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x1c
086ae8e7 +0x021:  test   %eax,%eax
086ae8e9 +0x023:  jne    086ae8f2 <+0x2c>
086ae8eb +0x025:  mov    $0x1,%eax
086ae8f0 +0x02a:  jmp    086ae8f7 <+0x31>
086ae8f2 +0x02c:  mov    $0x0,%eax
086ae8f7 +0x031:  test   %al,%al
086ae8f9 +0x033:  jne    086aec9c <+0x3d6>
086ae8ff +0x039:  mov    0xc(%ebp),%eax
086ae902 +0x03c:  mov    %eax,(%esp)
086ae905 +0x03f:  call   084b42bc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x36f>  ; global constructors keyed to game_master::CMacro::Reset()+0x36f
086ae90a +0x044:  mov    %eax,-0x10(%ebp)
086ae90d +0x047:  mov    -0x10(%ebp),%eax
086ae910 +0x04a:  mov    (%eax),%edx
086ae912 +0x04c:  mov    0x8(%ebp),%eax
086ae915 +0x04f:  mov    0x8bd(%eax),%eax
086ae91b +0x055:  mov    %eax,%ecx
086ae91d +0x057:  imul   %edx,%ecx
086ae920 +0x05a:  mov    %ecx,-0x1c(%ebp)
086ae923 +0x05d:  mov    $0x51eb851f,%edx
086ae928 +0x062:  mov    -0x1c(%ebp),%eax
086ae92b +0x065:  mul    %edx
086ae92d +0x067:  shr    $0x5,%edx
086ae930 +0x06a:  mov    0x8(%ebp),%eax
086ae933 +0x06d:  mov    %edx,0x90f(%eax)
086ae939 +0x073:  mov    -0x10(%ebp),%eax
086ae93c +0x076:  mov    0x4(%eax),%edx
086ae93f +0x079:  mov    0x8(%ebp),%eax
086ae942 +0x07c:  mov    0x8c1(%eax),%eax
086ae948 +0x082:  mov    %eax,%ecx
086ae94a +0x084:  imul   %edx,%ecx
086ae94d +0x087:  mov    %ecx,-0x1c(%ebp)
086ae950 +0x08a:  mov    $0x51eb851f,%edx
086ae955 +0x08f:  mov    -0x1c(%ebp),%eax
086ae958 +0x092:  mul    %edx
086ae95a +0x094:  shr    $0x5,%edx
086ae95d +0x097:  mov    0x8(%ebp),%eax
086ae960 +0x09a:  mov    %edx,0x913(%eax)
086ae966 +0x0a0:  mov    -0x10(%ebp),%eax
086ae969 +0x0a3:  movzwl 0x8(%eax),%eax
086ae96d +0x0a7:  movzwl %ax,%edx
086ae970 +0x0aa:  mov    0x8(%ebp),%eax
086ae973 +0x0ad:  movzwl 0x8c5(%eax),%eax
086ae97a +0x0b4:  movzwl %ax,%eax
086ae97d +0x0b7:  mov    %edx,%ecx
086ae97f +0x0b9:  imul   %eax,%ecx
086ae982 +0x0bc:  mov    $0x51eb851f,%edx
086ae987 +0x0c1:  mov    %ecx,%eax
086ae989 +0x0c3:  imul   %edx
086ae98b +0x0c5:  sar    $0x5,%edx
086ae98e +0x0c8:  mov    %ecx,%eax
086ae990 +0x0ca:  sar    $0x1f,%eax
086ae993 +0x0cd:  mov    %edx,%ecx
086ae995 +0x0cf:  sub    %eax,%ecx
086ae997 +0x0d1:  mov    %ecx,%eax
086ae999 +0x0d3:  mov    %eax,%edx
086ae99b +0x0d5:  mov    0x8(%ebp),%eax
086ae99e +0x0d8:  mov    %dx,0x917(%eax)
086ae9a5 +0x0df:  mov    -0x10(%ebp),%eax
086ae9a8 +0x0e2:  movzwl 0xa(%eax),%eax
086ae9ac +0x0e6:  movzwl %ax,%edx
086ae9af +0x0e9:  mov    0x8(%ebp),%eax
086ae9b2 +0x0ec:  movzwl 0x8c7(%eax),%eax
086ae9b9 +0x0f3:  movzwl %ax,%eax
086ae9bc +0x0f6:  mov    %edx,%ecx
086ae9be +0x0f8:  imul   %eax,%ecx
086ae9c1 +0x0fb:  mov    $0x51eb851f,%edx
086ae9c6 +0x100:  mov    %ecx,%eax
086ae9c8 +0x102:  imul   %edx
086ae9ca +0x104:  sar    $0x5,%edx
086ae9cd +0x107:  mov    %ecx,%eax
086ae9cf +0x109:  sar    $0x1f,%eax
086ae9d2 +0x10c:  mov    %edx,%ecx
086ae9d4 +0x10e:  sub    %eax,%ecx
086ae9d6 +0x110:  mov    %ecx,%eax
086ae9d8 +0x112:  mov    %eax,%edx
086ae9da +0x114:  mov    0x8(%ebp),%eax
086ae9dd +0x117:  mov    %dx,0x919(%eax)
086ae9e4 +0x11e:  mov    -0x10(%ebp),%eax
086ae9e7 +0x121:  movzwl 0xc(%eax),%eax
086ae9eb +0x125:  movzwl %ax,%edx
086ae9ee +0x128:  mov    0x8(%ebp),%eax
086ae9f1 +0x12b:  movzwl 0x8c9(%eax),%eax
086ae9f8 +0x132:  movzwl %ax,%eax
086ae9fb +0x135:  mov    %edx,%ecx
086ae9fd +0x137:  imul   %eax,%ecx
086aea00 +0x13a:  mov    $0x51eb851f,%edx
086aea05 +0x13f:  mov    %ecx,%eax
086aea07 +0x141:  imul   %edx
086aea09 +0x143:  sar    $0x5,%edx
086aea0c +0x146:  mov    %ecx,%eax
086aea0e +0x148:  sar    $0x1f,%eax
086aea11 +0x14b:  mov    %edx,%ecx
086aea13 +0x14d:  sub    %eax,%ecx
086aea15 +0x14f:  mov    %ecx,%eax
086aea17 +0x151:  mov    %eax,%edx
086aea19 +0x153:  mov    0x8(%ebp),%eax
086aea1c +0x156:  mov    %dx,0x91b(%eax)
086aea23 +0x15d:  mov    -0x10(%ebp),%eax
086aea26 +0x160:  movzwl 0xe(%eax),%eax
086aea2a +0x164:  movzwl %ax,%edx
086aea2d +0x167:  mov    0x8(%ebp),%eax
086aea30 +0x16a:  movzwl 0x8cb(%eax),%eax
086aea37 +0x171:  movzwl %ax,%eax
086aea3a +0x174:  mov    %edx,%ecx
086aea3c +0x176:  imul   %eax,%ecx
086aea3f +0x179:  mov    $0x51eb851f,%edx
086aea44 +0x17e:  mov    %ecx,%eax
086aea46 +0x180:  imul   %edx
086aea48 +0x182:  sar    $0x5,%edx
086aea4b +0x185:  mov    %ecx,%eax
086aea4d +0x187:  sar    $0x1f,%eax
086aea50 +0x18a:  mov    %edx,%ecx
086aea52 +0x18c:  sub    %eax,%ecx
086aea54 +0x18e:  mov    %ecx,%eax
086aea56 +0x190:  mov    %eax,%edx
086aea58 +0x192:  mov    0x8(%ebp),%eax
086aea5b +0x195:  mov    %dx,0x91d(%eax)
086aea62 +0x19c:  movl   $0x0,-0xc(%ebp)
086aea69 +0x1a3:  jmp    086aeac0 <+0x1fa>
086aea6b +0x1a5:  mov    -0xc(%ebp),%ebx
086aea6e +0x1a8:  mov    -0xc(%ebp),%edx
086aea71 +0x1ab:  mov    -0x10(%ebp),%eax
086aea74 +0x1ae:  add    $0x8,%edx
086aea77 +0x1b1:  movzwl (%eax,%edx,2),%eax
086aea7b +0x1b5:  movswl %ax,%edx
086aea7e +0x1b8:  mov    -0xc(%ebp),%ecx
086aea81 +0x1bb:  mov    0x8(%ebp),%eax
086aea84 +0x1be:  add    $0x460,%ecx
086aea8a +0x1c4:  movzwl 0xd(%eax,%ecx,2),%eax
086aea8f +0x1c9:  cwtl
086aea90 +0x1ca:  mov    %edx,%ecx
086aea92 +0x1cc:  imul   %eax,%ecx
086aea95 +0x1cf:  mov    $0x51eb851f,%edx
086aea9a +0x1d4:  mov    %ecx,%eax
086aea9c +0x1d6:  imul   %edx
086aea9e +0x1d8:  sar    $0x5,%edx
086aeaa1 +0x1db:  mov    %ecx,%eax
086aeaa3 +0x1dd:  sar    $0x1f,%eax
086aeaa6 +0x1e0:  mov    %edx,%ecx
086aeaa8 +0x1e2:  sub    %eax,%ecx
086aeaaa +0x1e4:  mov    %ecx,%eax
086aeaac +0x1e6:  mov    %eax,%edx
086aeaae +0x1e8:  mov    0x8(%ebp),%eax
086aeab1 +0x1eb:  lea    0x488(%ebx),%ecx
086aeab7 +0x1f1:  mov    %dx,0xf(%eax,%ecx,2)
086aeabc +0x1f6:  addl   $0x1,-0xc(%ebp)
086aeac0 +0x1fa:  cmpl   $0x3,-0xc(%ebp)
086aeac4 +0x1fe:  setle  %al
086aeac7 +0x201:  test   %al,%al
086aeac9 +0x203:  jne    086aea6b <+0x1a5>
086aeacb +0x205:  mov    -0x10(%ebp),%eax
086aeace +0x208:  mov    0x3a(%eax),%edx
086aead1 +0x20b:  mov    0x8(%ebp),%eax
086aead4 +0x20e:  mov    0x8f7(%eax),%eax
086aeada +0x214:  mov    %edx,%ecx
086aeadc +0x216:  imul   %eax,%ecx
086aeadf +0x219:  mov    $0x51eb851f,%edx
086aeae4 +0x21e:  mov    %ecx,%eax
086aeae6 +0x220:  imul   %edx
086aeae8 +0x222:  sar    $0x5,%edx
086aeaeb +0x225:  mov    %ecx,%eax
086aeaed +0x227:  sar    $0x1f,%eax
086aeaf0 +0x22a:  sub    %eax,%edx
086aeaf2 +0x22c:  mov    0x8(%ebp),%eax
086aeaf5 +0x22f:  mov    %edx,0x949(%eax)
086aeafb +0x235:  mov    -0x10(%ebp),%eax
086aeafe +0x238:  movzwl 0x3e(%eax),%eax
086aeb02 +0x23c:  movswl %ax,%edx
086aeb05 +0x23f:  mov    0x8(%ebp),%eax
086aeb08 +0x242:  movzwl 0x8fb(%eax),%eax
086aeb0f +0x249:  cwtl
086aeb10 +0x24a:  mov    %edx,%ecx
086aeb12 +0x24c:  imul   %eax,%ecx
086aeb15 +0x24f:  mov    $0x51eb851f,%edx
086aeb1a +0x254:  mov    %ecx,%eax
086aeb1c +0x256:  imul   %edx
086aeb1e +0x258:  sar    $0x5,%edx
086aeb21 +0x25b:  mov    %ecx,%eax
086aeb23 +0x25d:  sar    $0x1f,%eax
086aeb26 +0x260:  mov    %edx,%ecx
086aeb28 +0x262:  sub    %eax,%ecx
086aeb2a +0x264:  mov    %ecx,%eax
086aeb2c +0x266:  mov    %eax,%edx
086aeb2e +0x268:  mov    0x8(%ebp),%eax
086aeb31 +0x26b:  mov    %dx,0x94d(%eax)
086aeb38 +0x272:  mov    -0x10(%ebp),%eax
086aeb3b +0x275:  movzwl 0x40(%eax),%eax
086aeb3f +0x279:  movswl %ax,%edx
086aeb42 +0x27c:  mov    0x8(%ebp),%eax
086aeb45 +0x27f:  movzwl 0x8fd(%eax),%eax
086aeb4c +0x286:  cwtl
086aeb4d +0x287:  mov    %edx,%ecx
086aeb4f +0x289:  imul   %eax,%ecx
086aeb52 +0x28c:  mov    $0x51eb851f,%edx
086aeb57 +0x291:  mov    %ecx,%eax
086aeb59 +0x293:  imul   %edx
086aeb5b +0x295:  sar    $0x5,%edx
086aeb5e +0x298:  mov    %ecx,%eax
086aeb60 +0x29a:  sar    $0x1f,%eax
086aeb63 +0x29d:  mov    %edx,%ecx
086aeb65 +0x29f:  sub    %eax,%ecx
086aeb67 +0x2a1:  mov    %ecx,%eax
086aeb69 +0x2a3:  mov    %eax,%edx
086aeb6b +0x2a5:  mov    0x8(%ebp),%eax
086aeb6e +0x2a8:  mov    %dx,0x94f(%eax)
086aeb75 +0x2af:  mov    -0x10(%ebp),%eax
086aeb78 +0x2b2:  mov    0x42(%eax),%edx
086aeb7b +0x2b5:  mov    0x8(%ebp),%eax
086aeb7e +0x2b8:  mov    0x8ff(%eax),%eax
086aeb84 +0x2be:  mov    %eax,%ecx
086aeb86 +0x2c0:  imul   %edx,%ecx
086aeb89 +0x2c3:  mov    %ecx,-0x1c(%ebp)
086aeb8c +0x2c6:  mov    $0x51eb851f,%edx
086aeb91 +0x2cb:  mov    -0x1c(%ebp),%eax
086aeb94 +0x2ce:  mul    %edx
086aeb96 +0x2d0:  shr    $0x5,%edx
086aeb99 +0x2d3:  mov    0x8(%ebp),%eax
086aeb9c +0x2d6:  mov    %edx,0x951(%eax)
086aeba2 +0x2dc:  mov    -0x10(%ebp),%eax
086aeba5 +0x2df:  movzwl 0x46(%eax),%eax
086aeba9 +0x2e3:  movzwl %ax,%edx
086aebac +0x2e6:  mov    0x8(%ebp),%eax
086aebaf +0x2e9:  movzwl 0x903(%eax),%eax
086aebb6 +0x2f0:  movzwl %ax,%eax
086aebb9 +0x2f3:  mov    %edx,%ecx
086aebbb +0x2f5:  imul   %eax,%ecx
086aebbe +0x2f8:  mov    $0x51eb851f,%edx
086aebc3 +0x2fd:  mov    %ecx,%eax
086aebc5 +0x2ff:  imul   %edx
086aebc7 +0x301:  sar    $0x5,%edx
086aebca +0x304:  mov    %ecx,%eax
086aebcc +0x306:  sar    $0x1f,%eax
086aebcf +0x309:  mov    %edx,%ecx
086aebd1 +0x30b:  sub    %eax,%ecx
086aebd3 +0x30d:  mov    %ecx,%eax
086aebd5 +0x30f:  mov    %eax,%edx
086aebd7 +0x311:  mov    0x8(%ebp),%eax
086aebda +0x314:  mov    %dx,0x955(%eax)
086aebe1 +0x31b:  mov    -0x10(%ebp),%eax
086aebe4 +0x31e:  movzwl 0x48(%eax),%eax
086aebe8 +0x322:  movzwl %ax,%edx
086aebeb +0x325:  mov    0x8(%ebp),%eax
086aebee +0x328:  movzwl 0x905(%eax),%eax
086aebf5 +0x32f:  movzwl %ax,%eax
086aebf8 +0x332:  mov    %edx,%ecx
086aebfa +0x334:  imul   %eax,%ecx
086aebfd +0x337:  mov    $0x51eb851f,%edx
086aec02 +0x33c:  mov    %ecx,%eax
086aec04 +0x33e:  imul   %edx
086aec06 +0x340:  sar    $0x5,%edx
086aec09 +0x343:  mov    %ecx,%eax
086aec0b +0x345:  sar    $0x1f,%eax
086aec0e +0x348:  mov    %edx,%ecx
086aec10 +0x34a:  sub    %eax,%ecx
086aec12 +0x34c:  mov    %ecx,%eax
086aec14 +0x34e:  mov    %eax,%edx
086aec16 +0x350:  mov    0x8(%ebp),%eax
086aec19 +0x353:  mov    %dx,0x957(%eax)
086aec20 +0x35a:  mov    -0x10(%ebp),%eax
086aec23 +0x35d:  movzwl 0x4a(%eax),%eax
086aec27 +0x361:  movswl %ax,%edx
086aec2a +0x364:  mov    0x8(%ebp),%eax
086aec2d +0x367:  movzwl 0x907(%eax),%eax
086aec34 +0x36e:  cwtl
086aec35 +0x36f:  mov    %edx,%ecx
086aec37 +0x371:  imul   %eax,%ecx
086aec3a +0x374:  mov    $0x51eb851f,%edx
086aec3f +0x379:  mov    %ecx,%eax
086aec41 +0x37b:  imul   %edx
086aec43 +0x37d:  sar    $0x5,%edx
086aec46 +0x380:  mov    %ecx,%eax
086aec48 +0x382:  sar    $0x1f,%eax
086aec4b +0x385:  mov    %edx,%ecx
086aec4d +0x387:  sub    %eax,%ecx
086aec4f +0x389:  mov    %ecx,%eax
086aec51 +0x38b:  mov    %eax,%edx
086aec53 +0x38d:  mov    0x8(%ebp),%eax
086aec56 +0x390:  mov    %dx,0x959(%eax)
086aec5d +0x397:  mov    -0x10(%ebp),%eax
086aec60 +0x39a:  movzwl 0x4c(%eax),%eax
086aec64 +0x39e:  movswl %ax,%edx
086aec67 +0x3a1:  mov    0x8(%ebp),%eax
086aec6a +0x3a4:  movzwl 0x909(%eax),%eax
086aec71 +0x3ab:  cwtl
086aec72 +0x3ac:  mov    %edx,%ecx
086aec74 +0x3ae:  imul   %eax,%ecx
086aec77 +0x3b1:  mov    $0x51eb851f,%edx
086aec7c +0x3b6:  mov    %ecx,%eax
086aec7e +0x3b8:  imul   %edx
086aec80 +0x3ba:  sar    $0x5,%edx
086aec83 +0x3bd:  mov    %ecx,%eax
086aec85 +0x3bf:  sar    $0x1f,%eax
086aec88 +0x3c2:  mov    %edx,%ecx
086aec8a +0x3c4:  sub    %eax,%ecx
086aec8c +0x3c6:  mov    %ecx,%eax
086aec8e +0x3c8:  mov    %eax,%edx
086aec90 +0x3ca:  mov    0x8(%ebp),%eax
086aec93 +0x3cd:  mov    %dx,0x95b(%eax)
086aec9a +0x3d4:  jmp    086aec9d <+0x3d7>
086aec9c +0x3d6:  nop
086aec9d +0x3d7:  add    $0x34,%esp
086aeca0 +0x3da:  pop    %ebx
086aeca1 +0x3db:  pop    %ebp
086aeca2 +0x3dc:  ret
086aeca3 +0x3dd:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::RecalcAdditionalInfo @ 0x86ae8c6

/* WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*) */

void __thiscall WongWork::CUserPremium::RecalcAdditionalInfo(CUserPremium *this,CUser *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    iVar2 = GetAdvPremiumCount(this);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_086ae8f7;
    }
  }
  bVar1 = true;
LAB_086ae8f7:
  if (!bVar1) {
    piVar3 = (int *)CUserCharacInfo::getCurCharacAddInfoR((CUserCharacInfo *)param_1);
    *(uint *)(this + 0x90f) = (uint)(*(int *)(this + 0x8bd) * *piVar3) / 100;
    *(uint *)(this + 0x913) = (uint)(*(int *)(this + 0x8c1) * piVar3[1]) / 100;
    *(short *)(this + 0x917) =
         (short)((int)((uint)*(ushort *)(piVar3 + 2) * (uint)*(ushort *)(this + 0x8c5)) / 100);
    *(short *)(this + 0x919) =
         (short)((int)((uint)*(ushort *)((int)piVar3 + 10) * (uint)*(ushort *)(this + 0x8c7)) / 100)
    ;
    *(short *)(this + 0x91b) =
         (short)((int)((uint)*(ushort *)(piVar3 + 3) * (uint)*(ushort *)(this + 0x8c9)) / 100);
    *(short *)(this + 0x91d) =
         (short)((int)((uint)*(ushort *)((int)piVar3 + 0xe) * (uint)*(ushort *)(this + 0x8cb)) / 100
                );
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      *(short *)(this + (local_10 + 0x488) * 2 + 0xf) =
           (short)(((int)*(short *)((int)piVar3 + (local_10 + 8) * 2) *
                   (int)*(short *)(this + (local_10 + 0x460) * 2 + 0xd)) / 100);
    }
    *(int *)(this + 0x949) = (*(int *)((int)piVar3 + 0x3a) * *(int *)(this + 0x8f7)) / 100;
    *(short *)(this + 0x94d) =
         (short)(((int)*(short *)((int)piVar3 + 0x3e) * (int)*(short *)(this + 0x8fb)) / 100);
    *(short *)(this + 0x94f) =
         (short)(((int)(short)piVar3[0x10] * (int)*(short *)(this + 0x8fd)) / 100);
    *(uint *)(this + 0x951) = (uint)(*(int *)(this + 0x8ff) * *(int *)((int)piVar3 + 0x42)) / 100;
    *(short *)(this + 0x955) =
         (short)((int)((uint)*(ushort *)((int)piVar3 + 0x46) * (uint)*(ushort *)(this + 0x903)) /
                100);
    *(short *)(this + 0x957) =
         (short)((int)((uint)*(ushort *)(piVar3 + 0x12) * (uint)*(ushort *)(this + 0x905)) / 100);
    *(short *)(this + 0x959) =
         (short)(((int)*(short *)((int)piVar3 + 0x4a) * (int)*(short *)(this + 0x907)) / 100);
    *(short *)(this + 0x95b) =
         (short)(((int)(short)piVar3[0x13] * (int)*(short *)(this + 0x909)) / 100);
  }
  return;
}
```
