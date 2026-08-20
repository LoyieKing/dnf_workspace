# GmReduceEndurance

`_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss`

`AvatarRechargeServer::GmReduceEndurance(CUser*, short, short)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x081911b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081911b6  _ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss
#           AvatarRechargeServer::GmReduceEndurance(CUser*, short, short)
# range [0x081911b6, 0x08191317]
081911b6 +0x000:  push   %ebp
081911b7 +0x001:  mov    %esp,%ebp
081911b9 +0x003:  push   %ebx
081911ba +0x004:  sub    $0x44,%esp
081911bd +0x007:  mov    0xc(%ebp),%edx
081911c0 +0x00a:  mov    0x10(%ebp),%eax
081911c3 +0x00d:  mov    %dx,-0x2c(%ebp)
081911c7 +0x011:  mov    %ax,-0x30(%ebp)
081911cb +0x015:  cmpw   $0x0,-0x2c(%ebp)
081911d0 +0x01a:  js     0819130a <+0x154>
081911d6 +0x020:  cmpw   $0x9,-0x2c(%ebp)
081911db +0x025:  jg     0819130d <+0x157>
081911e1 +0x02b:  movswl -0x2c(%ebp),%ebx
081911e5 +0x02f:  mov    0x8(%ebp),%eax
081911e8 +0x032:  mov    %eax,(%esp)
081911eb +0x035:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081911f0 +0x03a:  mov    %ebx,0x8(%esp)
081911f4 +0x03e:  movl   $0x0,0x4(%esp)
081911fc +0x046:  mov    %eax,(%esp)
081911ff +0x049:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08191204 +0x04e:  mov    %eax,-0x1c(%ebp)
08191207 +0x051:  cmpl   $0x0,-0x1c(%ebp)
0819120b +0x055:  je     0819121c <+0x66>
0819120d +0x057:  mov    -0x1c(%ebp),%eax
08191210 +0x05a:  mov    %eax,(%esp)
08191213 +0x05d:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08191218 +0x062:  test   %al,%al
0819121a +0x064:  je     08191223 <+0x6d>
0819121c +0x066:  mov    $0x1,%eax
08191221 +0x06b:  jmp    08191228 <+0x72>
08191223 +0x06d:  mov    $0x0,%eax
08191228 +0x072:  test   %al,%al
0819122a +0x074:  jne    08191310 <+0x15a>
08191230 +0x07a:  mov    -0x1c(%ebp),%eax
08191233 +0x07d:  mov    0x7(%eax),%ebx
08191236 +0x080:  mov    0x8(%ebp),%eax
08191239 +0x083:  mov    %eax,(%esp)
0819123c +0x086:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08191241 +0x08b:  mov    %eax,(%esp)
08191244 +0x08e:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08191249 +0x093:  mov    %ebx,0x4(%esp)
0819124d +0x097:  mov    %eax,(%esp)
08191250 +0x09a:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
08191255 +0x09f:  mov    %eax,-0x18(%ebp)
08191258 +0x0a2:  mov    -0x18(%ebp),%eax
0819125b +0x0a5:  mov    %eax,(%esp)
0819125e +0x0a8:  call   08190699 <_ZL14getSocketCountPK20stAvatarEmblemInfo_t>  ; getSocketCount(stAvatarEmblemInfo_t const*)
08191263 +0x0ad:  mov    %eax,%ebx
08191265 +0x0af:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
0819126a +0x0b4:  add    $0x4,%eax
0819126d +0x0b7:  mov    %eax,(%esp)
08191270 +0x0ba:  call   088b1314 <_ZN4ARAD6SCRIPT14AvatarRecharge23getAvatarRecharageLimitEv>  ; ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit()
08191275 +0x0bf:  imul   %ebx,%eax
08191278 +0x0c2:  mov    %eax,-0x14(%ebp)
0819127b +0x0c5:  mov    -0x1c(%ebp),%eax
0819127e +0x0c8:  movzwl 0xf(%eax),%eax
08191282 +0x0cc:  movzwl %ax,%edx
08191285 +0x0cf:  movswl -0x30(%ebp),%eax
08191289 +0x0d3:  lea    (%edx,%eax,1),%eax
0819128c +0x0d6:  mov    %eax,-0x10(%ebp)
0819128f +0x0d9:  cmpl   $0x0,-0x10(%ebp)
08191293 +0x0dd:  jns    0819129e <+0xe8>
08191295 +0x0df:  movl   $0x0,-0x10(%ebp)
0819129c +0x0e6:  jmp    081912ac <+0xf6>
0819129e +0x0e8:  mov    -0x10(%ebp),%eax
081912a1 +0x0eb:  cmp    -0x14(%ebp),%eax
081912a4 +0x0ee:  jle    081912ac <+0xf6>
081912a6 +0x0f0:  mov    -0x14(%ebp),%eax
081912a9 +0x0f3:  mov    %eax,-0x10(%ebp)
081912ac +0x0f6:  mov    -0x10(%ebp),%eax
081912af +0x0f9:  mov    %eax,%edx
081912b1 +0x0fb:  mov    -0x1c(%ebp),%eax
081912b4 +0x0fe:  mov    %dx,0xf(%eax)
081912b8 +0x102:  movswl -0x2c(%ebp),%eax
081912bc +0x106:  mov    %eax,0x8(%esp)
081912c0 +0x10a:  mov    0x8(%ebp),%eax
081912c3 +0x10d:  mov    %eax,0x4(%esp)
081912c7 +0x111:  movl   $0x1,(%esp)
081912ce +0x118:  call   081913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>  ; AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short)
081912d3 +0x11d:  mov    -0x1c(%ebp),%eax
081912d6 +0x120:  movzwl 0xf(%eax),%eax
081912da +0x124:  movzwl %ax,%edx
081912dd +0x127:  mov    -0x1c(%ebp),%eax
081912e0 +0x12a:  mov    0x7(%eax),%eax
081912e3 +0x12d:  mov    %edx,0x4(%esp)
081912e7 +0x131:  mov    %eax,(%esp)
081912ea +0x134:  call   08190eae <_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitEii>  ; AvatarRechargeServer::SaveAvatarEnduranceUnit(int, int)
081912ef +0x139:  movl   $"succ avatar Endurance change",-0xc(%ebp)
081912f6 +0x140:  mov    -0xc(%ebp),%eax
081912f9 +0x143:  mov    %eax,0x4(%esp)
081912fd +0x147:  mov    0x8(%ebp),%eax
08191300 +0x14a:  mov    %eax,(%esp)
08191303 +0x14d:  call   08197d00 <_ZN4ARAD19notifySystemMessageEP5CUserPc>  ; ARAD::notifySystemMessage(CUser*, char*)
08191308 +0x152:  jmp    08191311 <+0x15b>
0819130a +0x154:  nop
0819130b +0x155:  jmp    08191311 <+0x15b>
0819130d +0x157:  nop
0819130e +0x158:  jmp    08191311 <+0x15b>
08191310 +0x15a:  nop
08191311 +0x15b:  add    $0x44,%esp
08191314 +0x15e:  pop    %ebx
08191315 +0x15f:  pop    %ebp
08191316 +0x160:  ret
08191317 +0x161:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::GmReduceEndurance @ 0x81911b6

/* AvatarRechargeServer::GmReduceEndurance(CUser*, short, short) */

void AvatarRechargeServer::GmReduceEndurance(CUser *param_1,short param_2,short param_3)

{
  bool bVar1;
  char cVar2;
  CInventory *pCVar3;
  Inven_Item *this;
  CAvatarItemMgr *this_00;
  stAvatarEmblemInfo_t *psVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  if ((-1 < param_2) && (param_2 < 10)) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    this = (Inven_Item *)CInventory::GetInvenRef(pCVar3,0,(int)param_2);
    if ((this == (Inven_Item *)0x0) || (cVar2 = Inven_Item::isEmpty(this), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      iVar5 = *(int *)(this + 7);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
      psVar4 = (stAvatarEmblemInfo_t *)WongWork::CAvatarItemMgr::getJewelSocketData(this_00,iVar5);
      iVar5 = getSocketCount(psVar4);
      iVar6 = ARAD::Singleton<AvatarRechargeServer>::Get();
      iVar6 = ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit((AvatarRecharge *)(iVar6 + 4));
      local_14 = (uint)*(ushort *)(this + 0xf) + (int)param_3;
      if (local_14 < 0) {
        local_14 = 0;
      }
      else if (iVar6 * iVar5 < local_14) {
        local_14 = iVar6 * iVar5;
      }
      *(short *)(this + 0xf) = (short)local_14;
      UpdateAvatarEndurance(1,param_1,(int)param_2);
      SaveAvatarEnduranceUnit(*(int *)(this + 7),(uint)*(ushort *)(this + 0xf));
      ARAD::notifySystemMessage(param_1,"succ avatar Endurance change");
    }
  }
  return;
}
```
