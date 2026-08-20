# IsSuccess

`_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi`

`expert_job::CExpertJob::IsSuccess(CUser*, CStackableItem const*, int&)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJob` | `0x0849b462` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849b462  _ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi
#           expert_job::CExpertJob::IsSuccess(CUser*, CStackableItem const*, int&)
# range [0x0849b462, 0x0849b58f]
0849b462 +0x000:  push   %ebp
0849b463 +0x001:  mov    %esp,%ebp
0849b465 +0x003:  push   %ebx
0849b466 +0x004:  sub    $0x44,%esp
0849b469 +0x007:  movl   $0x0,-0x14(%ebp)
0849b470 +0x00e:  lea    -0x14(%ebp),%eax
0849b473 +0x011:  mov    %eax,0x8(%esp)
0849b477 +0x015:  mov    0xc(%ebp),%eax
0849b47a +0x018:  mov    %eax,0x4(%esp)
0849b47e +0x01c:  mov    0x8(%ebp),%eax
0849b481 +0x01f:  mov    %eax,(%esp)
0849b484 +0x022:  call   0849b2e8 <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi>  ; expert_job::CExpertJob::GetSuccessRate(CUser*, CStackableItem const*, int&)
0849b489 +0x027:  mov    %eax,-0x10(%ebp)
0849b48c +0x02a:  cmpl   $0x0,-0x10(%ebp)
0849b490 +0x02e:  jne    0849b49c <+0x3a>
0849b492 +0x030:  mov    $0x0,%eax
0849b497 +0x035:  jmp    0849b589 <+0x127>
0849b49c +0x03a:  mov    -0x10(%ebp),%eax
0849b49f +0x03d:  mov    0x4(%eax),%edx
0849b4a2 +0x040:  mov    -0x14(%ebp),%eax
0849b4a5 +0x043:  lea    (%edx,%eax,1),%ebx
0849b4a8 +0x046:  movl   $0x64,(%esp)
0849b4af +0x04d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0849b4b4 +0x052:  cmp    %eax,%ebx
0849b4b6 +0x054:  setg   %al
0849b4b9 +0x057:  test   %al,%al
0849b4bb +0x059:  je     0849b584 <+0x122>
0849b4c1 +0x05f:  mov    -0x10(%ebp),%eax
0849b4c4 +0x062:  mov    0xc(%eax),%edx
0849b4c7 +0x065:  mov    -0x10(%ebp),%eax
0849b4ca +0x068:  mov    0x8(%eax),%eax
0849b4cd +0x06b:  mov    %edx,%ecx
0849b4cf +0x06d:  sub    %eax,%ecx
0849b4d1 +0x06f:  mov    %ecx,%eax
0849b4d3 +0x071:  add    $0x1,%eax
0849b4d6 +0x074:  mov    %eax,(%esp)
0849b4d9 +0x077:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0849b4de +0x07c:  mov    -0x10(%ebp),%edx
0849b4e1 +0x07f:  mov    0x8(%edx),%edx
0849b4e4 +0x082:  lea    (%eax,%edx,1),%edx
0849b4e7 +0x085:  mov    0x10(%ebp),%eax
0849b4ea +0x088:  mov    %edx,(%eax)
0849b4ec +0x08a:  mov    0x8(%ebp),%eax
0849b4ef +0x08d:  mov    %eax,(%esp)
0849b4f2 +0x090:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849b4f7 +0x095:  mov    %eax,-0xc(%ebp)
0849b4fa +0x098:  lea    -0x1c(%ebp),%eax
0849b4fd +0x09b:  mov    %eax,(%esp)
0849b500 +0x09e:  call   0849f34c <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x17d>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x17d
0849b505 +0x0a3:  mov    0x8(%ebp),%eax
0849b508 +0x0a6:  mov    %eax,(%esp)
0849b50b +0x0a9:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849b510 +0x0ae:  mov    %eax,0x4(%esp)
0849b514 +0x0b2:  mov    0x8(%ebp),%eax
0849b517 +0x0b5:  mov    %eax,(%esp)
0849b51a +0x0b8:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849b51f +0x0bd:  mov    %eax,%ebx
0849b521 +0x0bf:  mov    0x8(%ebp),%eax
0849b524 +0x0c2:  mov    %eax,(%esp)
0849b527 +0x0c5:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849b52c +0x0ca:  lea    -0x1c(%ebp),%edx
0849b52f +0x0cd:  mov    %edx,0xc(%esp)
0849b533 +0x0d1:  mov    %ebx,0x8(%esp)
0849b537 +0x0d5:  mov    %eax,0x4(%esp)
0849b53b +0x0d9:  mov    -0xc(%ebp),%eax
0849b53e +0x0dc:  mov    %eax,(%esp)
0849b541 +0x0df:  call   0850cc46 <_ZNK10CInventory24GetExpertJobAddtionalExpE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpE>  ; CInventory::GetExpertJobAddtionalExp(ENUM_EXPERT_JOB_TYPE, int, STItemScript::SEXPERTJOB::stExpertJobAdditionalExp&) const
0849b546 +0x0e4:  movl   $0x64,(%esp)
0849b54d +0x0eb:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0849b552 +0x0f0:  mov    %eax,-0x2c(%ebp)
0849b555 +0x0f3:  fildl  -0x2c(%ebp)
0849b558 +0x0f6:  flds   -0x1c(%ebp)
0849b55b +0x0f9:  fucompp
0849b55d +0x0fb:  fnstsw %ax
0849b55f +0x0fd:  test   $0x45,%ah
0849b562 +0x100:  sete   %al
0849b565 +0x103:  test   %al,%al
0849b567 +0x105:  je     0849b57d <+0x11b>
0849b569 +0x107:  mov    0x10(%ebp),%eax
0849b56c +0x10a:  mov    (%eax),%eax
0849b56e +0x10c:  mov    %eax,%edx
0849b570 +0x10e:  mov    -0x18(%ebp),%eax
0849b573 +0x111:  lea    (%edx,%eax,1),%eax
0849b576 +0x114:  mov    %eax,%edx
0849b578 +0x116:  mov    0x10(%ebp),%eax
0849b57b +0x119:  mov    %edx,(%eax)
0849b57d +0x11b:  mov    $0x1,%eax
0849b582 +0x120:  jmp    0849b589 <+0x127>
0849b584 +0x122:  mov    $0x0,%eax
0849b589 +0x127:  add    $0x44,%esp
0849b58c +0x12a:  pop    %ebx
0849b58d +0x12b:  pop    %ebp
0849b58e +0x12c:  ret
0849b58f +0x12d:  nop
```

## 反编译 C

```c
// expert_job::CExpertJob::IsSuccess @ 0x849b462

/* expert_job::CExpertJob::IsSuccess(CUser*, CStackableItem const*, int&) */

undefined4 expert_job::CExpertJob::IsSuccess(CUser *param_1,CStackableItem *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  CInventory *local_10;
  
  local_18 = 0;
  local_14 = GetSuccessRate(param_1,param_2,&local_18);
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = *(int *)(local_14 + 4) + local_18;
    iVar2 = get_rand_int(100);
    if (iVar2 < iVar3) {
      iVar3 = get_rand_int((*(int *)(local_14 + 0xc) - *(int *)(local_14 + 8)) + 1);
      *param_3 = iVar3 + *(int *)(local_14 + 8);
      local_10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      STItemScript::SEXPERTJOB::stExpertJobAdditionalExp::stExpertJobAdditionalExp
                ((stExpertJobAdditionalExp *)&local_20);
      iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetCurExpertJobLevel(param_1,iVar3);
      uVar4 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      CInventory::GetExpertJobAddtionalExp(local_10,uVar4,uVar1,&local_20);
      iVar3 = get_rand_int(100);
      if ((float)iVar3 < local_20) {
        *param_3 = *param_3 + local_1c;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
