# buyStatus

`_ZN10CQuestShop9buyStatusEP5CUserhhRs`

`CQuestShop::buyStatus(CUser*, unsigned char, unsigned char, short&)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef306` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef306  _ZN10CQuestShop9buyStatusEP5CUserhhRs
#           CQuestShop::buyStatus(CUser*, unsigned char, unsigned char, short&)
# range [0x085ef306, 0x085ef425]
085ef306 +0x000:  push   %ebp
085ef307 +0x001:  mov    %esp,%ebp
085ef309 +0x003:  push   %ebx
085ef30a +0x004:  sub    $0x34,%esp
085ef30d +0x007:  mov    0x10(%ebp),%edx
085ef310 +0x00a:  mov    0x14(%ebp),%eax
085ef313 +0x00d:  mov    %dl,-0x1c(%ebp)
085ef316 +0x010:  mov    %al,-0x20(%ebp)
085ef319 +0x013:  movzbl -0x1c(%ebp),%eax
085ef31d +0x017:  mov    %eax,0x4(%esp)
085ef321 +0x01b:  mov    0x8(%ebp),%eax
085ef324 +0x01e:  mov    %eax,(%esp)
085ef327 +0x021:  call   085ef02e <_ZN10CQuestShop20getStatusBuyingCountEh>  ; CQuestShop::getStatusBuyingCount(unsigned char)
085ef32c +0x026:  cwtl
085ef32d +0x027:  mov    %eax,-0x18(%ebp)
085ef330 +0x02a:  cmpl   $0xffffffff,-0x18(%ebp)
085ef334 +0x02e:  jne    085ef340 <+0x3a>
085ef336 +0x030:  mov    $0x1,%eax
085ef33b +0x035:  jmp    085ef41f <+0x119>
085ef340 +0x03a:  movzbl -0x20(%ebp),%edx
085ef344 +0x03e:  mov    -0x18(%ebp),%eax
085ef347 +0x041:  lea    (%edx,%eax,1),%eax
085ef34a +0x044:  mov    %eax,%edx
085ef34c +0x046:  mov    0x18(%ebp),%eax
085ef34f +0x049:  mov    %dx,(%eax)
085ef352 +0x04c:  mov    0xc(%ebp),%eax
085ef355 +0x04f:  mov    %eax,(%esp)
085ef358 +0x052:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085ef35d +0x057:  mov    0x18(%ebp),%edx
085ef360 +0x05a:  movzwl (%edx),%edx
085ef363 +0x05d:  movswl %dx,%ecx
085ef366 +0x060:  movzbl -0x1c(%ebp),%edx
085ef36a +0x064:  mov    %eax,0xc(%esp)
085ef36e +0x068:  mov    %ecx,0x8(%esp)
085ef372 +0x06c:  mov    %edx,0x4(%esp)
085ef376 +0x070:  mov    0x8(%ebp),%eax
085ef379 +0x073:  mov    %eax,(%esp)
085ef37c +0x076:  call   085ef0ce <_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi>  ; CQuestShop::checkBuyingStatus_LimitLevel(unsigned char, short, int)
085ef381 +0x07b:  mov    %al,-0x11(%ebp)
085ef384 +0x07e:  movzbl -0x11(%ebp),%eax
085ef388 +0x082:  xor    $0x1,%eax
085ef38b +0x085:  test   %al,%al
085ef38d +0x087:  je     085ef399 <+0x93>
085ef38f +0x089:  mov    $0xe,%eax
085ef394 +0x08e:  jmp    085ef41f <+0x119>
085ef399 +0x093:  mov    0x8(%ebp),%eax
085ef39c +0x096:  mov    %eax,(%esp)
085ef39f +0x099:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef3a4 +0x09e:  mov    %eax,-0x10(%ebp)
085ef3a7 +0x0a1:  movzbl -0x20(%ebp),%edx
085ef3ab +0x0a5:  movzbl -0x1c(%ebp),%eax
085ef3af +0x0a9:  mov    %edx,0x8(%esp)
085ef3b3 +0x0ad:  mov    %eax,0x4(%esp)
085ef3b7 +0x0b1:  mov    0x8(%ebp),%eax
085ef3ba +0x0b4:  mov    %eax,(%esp)
085ef3bd +0x0b7:  call   085eed2a <_ZN10CQuestShop5subQpEhh>  ; CQuestShop::subQp(unsigned char, unsigned char)
085ef3c2 +0x0bc:  mov    %eax,-0xc(%ebp)
085ef3c5 +0x0bf:  cmpl   $0x0,-0xc(%ebp)
085ef3c9 +0x0c3:  je     085ef3d0 <+0xca>
085ef3cb +0x0c5:  mov    -0xc(%ebp),%eax
085ef3ce +0x0c8:  jmp    085ef41f <+0x119>
085ef3d0 +0x0ca:  movzbl -0x20(%ebp),%edx
085ef3d4 +0x0ce:  movzbl -0x1c(%ebp),%eax
085ef3d8 +0x0d2:  mov    %edx,0x8(%esp)
085ef3dc +0x0d6:  mov    %eax,0x4(%esp)
085ef3e0 +0x0da:  mov    0x8(%ebp),%eax
085ef3e3 +0x0dd:  mov    %eax,(%esp)
085ef3e6 +0x0e0:  call   085eef28 <_ZN10CQuestShop20incStatusBuyingCountEhh>  ; CQuestShop::incStatusBuyingCount(unsigned char, unsigned char)
085ef3eb +0x0e5:  movzbl -0x1c(%ebp),%ebx
085ef3ef +0x0e9:  mov    0x8(%ebp),%eax
085ef3f2 +0x0ec:  mov    %eax,(%esp)
085ef3f5 +0x0ef:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
085ef3fa +0x0f4:  mov    0xc(%ebp),%edx
085ef3fd +0x0f7:  add    $0x79700,%edx
085ef403 +0x0fd:  mov    %ebx,0xc(%esp)
085ef407 +0x101:  mov    %eax,0x8(%esp)
085ef40b +0x105:  mov    -0x10(%ebp),%eax
085ef40e +0x108:  mov    %eax,0x4(%esp)
085ef412 +0x10c:  mov    %edx,(%esp)
085ef415 +0x10f:  call   0868885a <_ZN15cUserHistoryLog5QPSubEiii>  ; cUserHistoryLog::QPSub(int, int, int)
085ef41a +0x114:  mov    $0x0,%eax
085ef41f +0x119:  add    $0x34,%esp
085ef422 +0x11c:  pop    %ebx
085ef423 +0x11d:  pop    %ebp
085ef424 +0x11e:  ret
085ef425 +0x11f:  nop
```

## 反编译 C

```c
// CQuestShop::buyStatus @ 0x85ef306

/* CQuestShop::buyStatus(CUser*, unsigned char, unsigned char, short&) */

int __thiscall
CQuestShop::buyStatus(CQuestShop *this,CUser *param_1,uchar param_2,uchar param_3,short *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = getStatusBuyingCount(this,param_2);
  if (sVar2 == -1) {
    iVar3 = 1;
  }
  else {
    *param_4 = (ushort)param_3 + sVar2;
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar1 = checkBuyingStatus_LimitLevel(this,param_2,*param_4,iVar4);
    if (cVar1 == '\x01') {
      iVar4 = getQp(this);
      iVar3 = subQp(this,param_2,param_3);
      if (iVar3 == 0) {
        incStatusBuyingCount(this,param_2,param_3);
        iVar3 = getQp(this);
        cUserHistoryLog::QPSub((cUserHistoryLog *)(param_1 + 0x79700),iVar4,iVar3,(uint)param_2);
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0xe;
    }
  }
  return iVar3;
}
```
