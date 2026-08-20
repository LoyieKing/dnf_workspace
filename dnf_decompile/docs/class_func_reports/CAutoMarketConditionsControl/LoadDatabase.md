# LoadDatabase

`_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL`

`CAutoMarketConditionsControl::LoadDatabase(SIG_AUTO_MARKET_CONDITIONS_CONTROL*)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f8684` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8684  _ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL
#           CAutoMarketConditionsControl::LoadDatabase(SIG_AUTO_MARKET_CONDITIONS_CONTROL*)
# range [0x082f8684, 0x082f89bb]
082f8684 +0x000:  push   %ebp
082f8685 +0x001:  mov    %esp,%ebp
082f8687 +0x003:  push   %edi
082f8688 +0x004:  push   %esi
082f8689 +0x005:  push   %ebx
082f868a +0x006:  sub    $0x9c,%esp
082f8690 +0x00c:  movl   $0x0,-0x28(%ebp)
082f8697 +0x013:  movl   $0x0,-0x24(%ebp)
082f869e +0x01a:  mov    0xc(%ebp),%eax
082f86a1 +0x01d:  movzbl 0x68(%eax),%eax
082f86a5 +0x021:  test   %al,%al
082f86a7 +0x023:  je     082f86b9 <+0x35>
082f86a9 +0x025:  mov    0xc(%ebp),%eax
082f86ac +0x028:  mov    0x4(%eax),%edx
082f86af +0x02b:  mov    (%eax),%eax
082f86b1 +0x02d:  mov    %eax,-0x28(%ebp)
082f86b4 +0x030:  mov    %edx,-0x24(%ebp)
082f86b7 +0x033:  jmp    082f8704 <+0x80>
082f86b9 +0x035:  mov    0xc(%ebp),%eax
082f86bc +0x038:  mov    0x3c(%eax),%ecx
082f86bf +0x03b:  mov    0x40(%eax),%ebx
082f86c2 +0x03e:  mov    0xc(%ebp),%eax
082f86c5 +0x041:  mov    0x48(%eax),%edx
082f86c8 +0x044:  mov    0x44(%eax),%eax
082f86cb +0x047:  add    %ecx,%eax
082f86cd +0x049:  adc    %ebx,%edx
082f86cf +0x04b:  mov    0xc(%ebp),%ecx
082f86d2 +0x04e:  mov    0x10(%ecx),%esi
082f86d5 +0x051:  mov    0x14(%ecx),%edi
082f86d8 +0x054:  mov    0xc(%ebp),%ecx
082f86db +0x057:  mov    0x1c(%ecx),%ebx
082f86de +0x05a:  mov    0x18(%ecx),%ecx
082f86e1 +0x05d:  add    %esi,%ecx
082f86e3 +0x05f:  adc    %edi,%ebx
082f86e5 +0x061:  mov    %eax,%esi
082f86e7 +0x063:  mov    %edx,%edi
082f86e9 +0x065:  sub    %ecx,%esi
082f86eb +0x067:  sbb    %ebx,%edi
082f86ed +0x069:  mov    %esi,%ecx
082f86ef +0x06b:  mov    %edi,%ebx
082f86f1 +0x06d:  mov    0xc(%ebp),%eax
082f86f4 +0x070:  mov    0x24(%eax),%edx
082f86f7 +0x073:  mov    0x20(%eax),%eax
082f86fa +0x076:  add    %ecx,%eax
082f86fc +0x078:  adc    %ebx,%edx
082f86fe +0x07a:  mov    %eax,-0x28(%ebp)
082f8701 +0x07d:  mov    %edx,-0x24(%ebp)
082f8704 +0x080:  mov    0x8(%ebp),%eax
082f8707 +0x083:  lea    0x54(%eax),%edi
082f870a +0x086:  mov    0x8(%ebp),%ebx
082f870d +0x089:  mov    0xc(%ebp),%eax
082f8710 +0x08c:  mov    0x30(%eax),%ecx
082f8713 +0x08f:  mov    0x8(%ebp),%eax
082f8716 +0x092:  lea    0x4(%eax),%esi
082f8719 +0x095:  fildll -0x28(%ebp)
082f871c +0x098:  mov    0xc(%ebp),%eax
082f871f +0x09b:  mov    0xc(%eax),%edx
082f8722 +0x09e:  mov    0x8(%eax),%eax
082f8725 +0x0a1:  mov    %eax,-0x48(%ebp)
082f8728 +0x0a4:  mov    %edx,-0x44(%ebp)
082f872b +0x0a7:  fildll -0x48(%ebp)
082f872e +0x0aa:  test   %edx,%edx
082f8730 +0x0ac:  jns    082f873a <+0xb6>
082f8732 +0x0ae:  fldt   &data#7a957c7c(.rodata)
082f8738 +0x0b4:  faddp  %st,%st(1)
082f873a +0x0b6:  fstpl  -0x40(%ebp)
082f873d +0x0b9:  fldl   -0x40(%ebp)
082f8740 +0x0bc:  fxch   %st(1)
082f8742 +0x0be:  mov    %edi,0x1c(%esp)
082f8746 +0x0c2:  mov    %ebx,0x18(%esp)
082f874a +0x0c6:  mov    %ecx,0x14(%esp)
082f874e +0x0ca:  mov    %esi,0x10(%esp)
082f8752 +0x0ce:  fstpl  0x8(%esp)
082f8756 +0x0d2:  fstpl  (%esp)
082f8759 +0x0d5:  call   082f843f <_Z22GetMarketConditionRateddPdiRiRd>  ; GetMarketConditionRate(double, double, double*, int, int&, double&)
082f875e +0x0da:  mov    0x8(%ebp),%eax
082f8761 +0x0dd:  lea    0x3d4(%eax),%edi
082f8767 +0x0e3:  mov    0x8(%ebp),%eax
082f876a +0x0e6:  lea    0x380(%eax),%esi
082f8770 +0x0ec:  mov    0xc(%ebp),%eax
082f8773 +0x0ef:  mov    0x34(%eax),%ecx
082f8776 +0x0f2:  mov    0x8(%ebp),%eax
082f8779 +0x0f5:  lea    0x384(%eax),%ebx
082f877f +0x0fb:  fildll -0x28(%ebp)
082f8782 +0x0fe:  mov    0xc(%ebp),%eax
082f8785 +0x101:  mov    0xc(%eax),%edx
082f8788 +0x104:  mov    0x8(%eax),%eax
082f878b +0x107:  mov    %eax,-0x48(%ebp)
082f878e +0x10a:  mov    %edx,-0x44(%ebp)
082f8791 +0x10d:  fildll -0x48(%ebp)
082f8794 +0x110:  test   %edx,%edx
082f8796 +0x112:  jns    082f87a0 <+0x11c>
082f8798 +0x114:  fldt   &data#7a957c7c(.rodata)
082f879e +0x11a:  faddp  %st,%st(1)
082f87a0 +0x11c:  fstpl  -0x40(%ebp)
082f87a3 +0x11f:  fldl   -0x40(%ebp)
082f87a6 +0x122:  fxch   %st(1)
082f87a8 +0x124:  mov    %edi,0x1c(%esp)
082f87ac +0x128:  mov    %esi,0x18(%esp)
082f87b0 +0x12c:  mov    %ecx,0x14(%esp)
082f87b4 +0x130:  mov    %ebx,0x10(%esp)
082f87b8 +0x134:  fstpl  0x8(%esp)
082f87bc +0x138:  fstpl  (%esp)
082f87bf +0x13b:  call   082f843f <_Z22GetMarketConditionRateddPdiRiRd>  ; GetMarketConditionRate(double, double, double*, int, int&, double&)
082f87c4 +0x140:  mov    0x8(%ebp),%eax
082f87c7 +0x143:  lea    0x43c(%eax),%edi
082f87cd +0x149:  mov    0x8(%ebp),%eax
082f87d0 +0x14c:  lea    0x3e8(%eax),%esi
082f87d6 +0x152:  mov    0xc(%ebp),%eax
082f87d9 +0x155:  mov    0x38(%eax),%ecx
082f87dc +0x158:  mov    0x8(%ebp),%eax
082f87df +0x15b:  lea    0x3ec(%eax),%ebx
082f87e5 +0x161:  fildll -0x28(%ebp)
082f87e8 +0x164:  mov    0xc(%ebp),%eax
082f87eb +0x167:  mov    0xc(%eax),%edx
082f87ee +0x16a:  mov    0x8(%eax),%eax
082f87f1 +0x16d:  mov    %eax,-0x48(%ebp)
082f87f4 +0x170:  mov    %edx,-0x44(%ebp)
082f87f7 +0x173:  fildll -0x48(%ebp)
082f87fa +0x176:  test   %edx,%edx
082f87fc +0x178:  jns    082f8806 <+0x182>
082f87fe +0x17a:  fldt   &data#7a957c7c(.rodata)
082f8804 +0x180:  faddp  %st,%st(1)
082f8806 +0x182:  fstpl  -0x40(%ebp)
082f8809 +0x185:  fldl   -0x40(%ebp)
082f880c +0x188:  fxch   %st(1)
082f880e +0x18a:  mov    %edi,0x1c(%esp)
082f8812 +0x18e:  mov    %esi,0x18(%esp)
082f8816 +0x192:  mov    %ecx,0x14(%esp)
082f881a +0x196:  mov    %ebx,0x10(%esp)
082f881e +0x19a:  fstpl  0x8(%esp)
082f8822 +0x19e:  fstpl  (%esp)
082f8825 +0x1a1:  call   082f843f <_Z22GetMarketConditionRateddPdiRiRd>  ; GetMarketConditionRate(double, double, double*, int, int&, double&)
082f882a +0x1a6:  mov    0xc(%ebp),%eax
082f882d +0x1a9:  mov    0x38(%eax),%edx
082f8830 +0x1ac:  mov    0x8(%ebp),%eax
082f8833 +0x1af:  mov    0x3e8(%eax),%eax
082f8839 +0x1b5:  cmp    %eax,%edx
082f883b +0x1b7:  je     082f8848 <+0x1c4>
082f883d +0x1b9:  mov    0x8(%ebp),%eax
082f8840 +0x1bc:  mov    %eax,(%esp)
082f8843 +0x1bf:  call   082f85a8 <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEv>  ; CAutoMarketConditionsControl::SendNotiSetDurability()
082f8848 +0x1c4:  mov    0x8(%ebp),%eax
082f884b +0x1c7:  mov    0x3e8(%eax),%eax
082f8851 +0x1cd:  mov    %eax,-0x64(%ebp)
082f8854 +0x1d0:  mov    0x8(%ebp),%eax
082f8857 +0x1d3:  mov    0x380(%eax),%eax
082f885d +0x1d9:  mov    %eax,-0x60(%ebp)
082f8860 +0x1dc:  mov    0x8(%ebp),%eax
082f8863 +0x1df:  mov    (%eax),%edi
082f8865 +0x1e1:  mov    0xc(%ebp),%eax
082f8868 +0x1e4:  mov    0x8(%eax),%ebx
082f886b +0x1e7:  mov    0xc(%eax),%esi
082f886e +0x1ea:  movl   $0x0,0xc(%esp)
082f8876 +0x1f2:  movl   $0xae,0x8(%esp)
082f887e +0x1fa:  movl   $&_ZZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROLE19__PRETTY_FUNCTION__,0x4(%esp)
082f8886 +0x202:  lea    -0x38(%ebp),%eax
082f8889 +0x205:  mov    %eax,(%esp)
082f888c +0x208:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f8891 +0x20d:  mov    -0x64(%ebp),%eax
082f8894 +0x210:  mov    %eax,0x20(%esp)
082f8898 +0x214:  mov    -0x60(%ebp),%edx
082f889b +0x217:  mov    %edx,0x1c(%esp)
082f889f +0x21b:  mov    %edi,0x18(%esp)
082f88a3 +0x21f:  mov    %ebx,0x10(%esp)
082f88a7 +0x223:  mov    %esi,0x14(%esp)
082f88ab +0x227:  mov    -0x28(%ebp),%eax
082f88ae +0x22a:  mov    -0x24(%ebp),%edx
082f88b1 +0x22d:  mov    %eax,0x8(%esp)
082f88b5 +0x231:  mov    %edx,0xc(%esp)
082f88b9 +0x235:  movl   $"LoadDatabase() %qd %u %d %d %d",0x4(%esp)
082f88c1 +0x23d:  lea    -0x38(%ebp),%eax
082f88c4 +0x240:  mov    %eax,(%esp)
082f88c7 +0x243:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f88cc +0x248:  mov    -0x28(%ebp),%eax
082f88cf +0x24b:  mov    -0x24(%ebp),%edx
082f88d2 +0x24e:  mov    0xc(%ebp),%ecx
082f88d5 +0x251:  mov    0xc(%ecx),%ebx
082f88d8 +0x254:  mov    0x8(%ecx),%ecx
082f88db +0x257:  sub    %ecx,%eax
082f88dd +0x259:  sbb    %ebx,%edx
082f88df +0x25b:  mov    %eax,-0x20(%ebp)
082f88e2 +0x25e:  mov    %edx,-0x1c(%ebp)
082f88e5 +0x261:  cmpl   $0x0,-0x1c(%ebp)
082f88e9 +0x265:  jns    082f88f9 <+0x275>
082f88eb +0x267:  movl   $0x0,-0x20(%ebp)
082f88f2 +0x26e:  movl   $0x0,-0x1c(%ebp)
082f88f9 +0x275:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082f88fe +0x27a:  mov    %eax,(%esp)
082f8901 +0x27d:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
082f8906 +0x282:  cmp    $0x1,%eax
082f8909 +0x285:  sete   %al
082f890c +0x288:  test   %al,%al
082f890e +0x28a:  je     082f89ac <+0x328>
082f8914 +0x290:  mov    0x8(%ebp),%eax
082f8917 +0x293:  mov    0x3e8(%eax),%eax
082f891d +0x299:  mov    %eax,-0x5c(%ebp)
082f8920 +0x29c:  mov    0x8(%ebp),%eax
082f8923 +0x29f:  mov    0x380(%eax),%eax
082f8929 +0x2a5:  mov    %eax,-0x58(%ebp)
082f892c +0x2a8:  mov    0x8(%ebp),%eax
082f892f +0x2ab:  mov    (%eax),%eax
082f8931 +0x2ad:  mov    %eax,-0x54(%ebp)
082f8934 +0x2b0:  mov    0xc(%ebp),%eax
082f8937 +0x2b3:  mov    0x8(%eax),%esi
082f893a +0x2b6:  mov    0xc(%eax),%edi
082f893d +0x2b9:  mov    %esi,-0x50(%ebp)
082f8940 +0x2bc:  mov    %edi,-0x4c(%ebp)
082f8943 +0x2bf:  mov    -0x20(%ebp),%esi
082f8946 +0x2c2:  mov    -0x1c(%ebp),%edi
082f8949 +0x2c5:  mov    0xc(%ebp),%eax
082f894c +0x2c8:  mov    0x44(%eax),%ecx
082f894f +0x2cb:  mov    0x48(%eax),%ebx
082f8952 +0x2ce:  mov    0xc(%ebp),%eax
082f8955 +0x2d1:  mov    %eax,-0x70(%ebp)
082f8958 +0x2d4:  mov    -0x70(%ebp),%edx
082f895b +0x2d7:  mov    0x3c(%edx),%eax
082f895e +0x2da:  mov    0x40(%edx),%edx
082f8961 +0x2dd:  mov    %eax,-0x70(%ebp)
082f8964 +0x2e0:  mov    %edx,-0x6c(%ebp)
082f8967 +0x2e3:  mov    -0x5c(%ebp),%eax
082f896a +0x2e6:  mov    %eax,0x28(%esp)
082f896e +0x2ea:  mov    -0x58(%ebp),%edx
082f8971 +0x2ed:  mov    %edx,0x24(%esp)
082f8975 +0x2f1:  mov    -0x54(%ebp),%eax
082f8978 +0x2f4:  mov    %eax,0x20(%esp)
082f897c +0x2f8:  mov    -0x50(%ebp),%eax
082f897f +0x2fb:  mov    -0x4c(%ebp),%edx
082f8982 +0x2fe:  mov    %eax,0x18(%esp)
082f8986 +0x302:  mov    %edx,0x1c(%esp)
082f898a +0x306:  mov    %esi,0x10(%esp)
082f898e +0x30a:  mov    %edi,0x14(%esp)
082f8992 +0x30e:  mov    %ecx,0x8(%esp)
082f8996 +0x312:  mov    %ebx,0xc(%esp)
082f899a +0x316:  mov    -0x70(%ebp),%edx
082f899d +0x319:  mov    -0x6c(%ebp),%ecx
082f89a0 +0x31c:  mov    %edx,(%esp)
082f89a3 +0x31f:  mov    %ecx,0x4(%esp)
082f89a7 +0x323:  call   08433d70 <_ZN36DB_UpdateAutoMarketConditionsControl11makeRequestEyyyyiii>  ; DB_UpdateAutoMarketConditionsControl::makeRequest(unsigned long long, unsigned long long, unsigned long long, unsigned long long, int, int, int)
082f89ac +0x328:  mov    $0x0,%eax
082f89b1 +0x32d:  add    $0x9c,%esp
082f89b7 +0x333:  pop    %ebx
082f89b8 +0x334:  pop    %esi
082f89b9 +0x335:  pop    %edi
082f89ba +0x336:  pop    %ebp
082f89bb +0x337:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControl::LoadDatabase @ 0x82f8684

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::LoadDatabase(SIG_AUTO_MARKET_CONDITIONS_CONTROL*) */

undefined4 __thiscall
CAutoMarketConditionsControl::LoadDatabase
          (CAutoMarketConditionsControl *this,SIG_AUTO_MARKET_CONDITIONS_CONTROL *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  CEnvironment *this_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longdouble lVar10;
  cMyTrace local_3c [16];
  uint local_2c;
  int iStack_28;
  int local_24;
  int local_20;
  
  if (param_1[0x68] == (SIG_AUTO_MARKET_CONDITIONS_CONTROL)0x0) {
    uVar6 = *(uint *)(param_1 + 0x44) + *(uint *)(param_1 + 0x3c);
    uVar8 = *(uint *)(param_1 + 0x18) + *(uint *)(param_1 + 0x10);
    uVar9 = uVar6 - uVar8;
    local_2c = *(uint *)(param_1 + 0x20) + uVar9;
    iStack_28 = *(int *)(param_1 + 0x24) +
                (((*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x40) +
                  (uint)CARRY4(*(uint *)(param_1 + 0x44),*(uint *)(param_1 + 0x3c))) -
                 (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x10)))) -
                (uint)(uVar6 < uVar8)) + (uint)CARRY4(*(uint *)(param_1 + 0x20),uVar9);
  }
  else {
    iStack_28 = *(int *)(param_1 + 4);
    local_2c = *(uint *)param_1;
  }
  lVar10 = (longdouble)*(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) < 0) {
    lVar10 = _DAT_08c1fc60 + lVar10;
  }
  GetMarketConditionRate
            ((double)lVar10,(double)CONCAT44(iStack_28,local_2c),(double *)(this + 4),
             *(int *)(param_1 + 0x30),(int *)this,(double *)(this + 0x54));
  lVar10 = (longdouble)*(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) < 0) {
    lVar10 = _DAT_08c1fc60 + lVar10;
  }
  GetMarketConditionRate
            ((double)lVar10,(double)CONCAT44(iStack_28,local_2c),(double *)(this + 900),
             *(int *)(param_1 + 0x34),(int *)(this + 0x380),(double *)(this + 0x3d4));
  lVar10 = (longdouble)*(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) < 0) {
    lVar10 = _DAT_08c1fc60 + lVar10;
  }
  GetMarketConditionRate
            ((double)lVar10,(double)CONCAT44(iStack_28,local_2c),(double *)(this + 0x3ec),
             *(int *)(param_1 + 0x38),(int *)(this + 1000),(double *)(this + 0x43c));
  if (*(int *)(param_1 + 0x38) != *(int *)(this + 1000)) {
    SendNotiSetDurability(this);
  }
  uVar1 = *(undefined4 *)(this + 1000);
  uVar2 = *(undefined4 *)(this + 0x380);
  uVar3 = *(undefined4 *)this;
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  cMyTrace::cMyTrace(local_3c,
                     "int CAutoMarketConditionsControl::LoadDatabase(SIG_AUTO_MARKET_CONDITIONS_CONTROL*)"
                     ,0xae,0);
  cMyTrace::operator()
            (local_3c,"LoadDatabase() %qd %u %d %d %d",local_2c,iStack_28,uVar4,uVar5,uVar3,uVar2,
             uVar1);
  local_24 = local_2c - *(uint *)(param_1 + 8);
  local_20 = (iStack_28 - *(int *)(param_1 + 0xc)) - (uint)(local_2c < *(uint *)(param_1 + 8));
  if (local_20 < 0) {
    local_24 = 0;
    local_20 = 0;
  }
  this_00 = (CEnvironment *)G_CEnvironment();
  iVar7 = CEnvironment::get_channel_no(this_00);
  if (iVar7 == 1) {
    DB_UpdateAutoMarketConditionsControl::makeRequest
              (*(ulonglong *)(param_1 + 0x3c),*(ulonglong *)(param_1 + 0x44),
               CONCAT44(local_20,local_24),*(ulonglong *)(param_1 + 8),*(int *)this,
               *(int *)(this + 0x380),*(int *)(this + 1000));
  }
  return 0;
}
```
