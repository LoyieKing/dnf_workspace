# IsAreaNearEntranceDungeon

`_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser`

`private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c5082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c5082  _ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser
#           private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)
# range [0x085c5082, 0x085c532b]
085c5082 +0x000:  push   %ebp
085c5083 +0x001:  mov    %esp,%ebp
085c5085 +0x003:  push   %esi
085c5086 +0x004:  push   %ebx
085c5087 +0x005:  sub    $0x90,%esp
085c508d +0x00b:  movl   $0x0,-0x1c(%ebp)
085c5094 +0x012:  movl   $0x0,-0x18(%ebp)
085c509b +0x019:  movl   $0x0,-0x14(%ebp)
085c50a2 +0x020:  movl   $0x0,-0x10(%ebp)
085c50a9 +0x027:  movl   $0x0,-0xc(%ebp)
085c50b0 +0x02e:  cmpl   $0x0,0xc(%ebp)
085c50b4 +0x032:  jne    085c50f6 <+0x74>
085c50b6 +0x034:  movl   $0x5,0xc(%esp)
085c50be +0x03c:  movl   $0x233,0x8(%esp)
085c50c6 +0x044:  movl   $&_ZZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085c50ce +0x04c:  lea    -0x6c(%ebp),%eax
085c50d1 +0x04f:  mov    %eax,(%esp)
085c50d4 +0x052:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c50d9 +0x057:  movl   $"pUser == NULL",0x4(%esp)
085c50e1 +0x05f:  lea    -0x6c(%ebp),%eax
085c50e4 +0x062:  mov    %eax,(%esp)
085c50e7 +0x065:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c50ec +0x06a:  mov    $0x0,%ebx
085c50f1 +0x06f:  jmp    085c531f <+0x29d>
085c50f6 +0x074:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085c50fb +0x079:  mov    %eax,-0x14(%ebp)
085c50fe +0x07c:  cmpl   $0x0,-0x14(%ebp)
085c5102 +0x080:  sete   %al
085c5105 +0x083:  test   %al,%al
085c5107 +0x085:  je     085c5149 <+0xc7>
085c5109 +0x087:  movl   $0x5,0xc(%esp)
085c5111 +0x08f:  movl   $0x239,0x8(%esp)
085c5119 +0x097:  movl   $&_ZZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085c5121 +0x09f:  lea    -0x5c(%ebp),%eax
085c5124 +0x0a2:  mov    %eax,(%esp)
085c5127 +0x0a5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c512c +0x0aa:  movl   $"G_GameWorld call failed",0x4(%esp)
085c5134 +0x0b2:  lea    -0x5c(%ebp),%eax
085c5137 +0x0b5:  mov    %eax,(%esp)
085c513a +0x0b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c513f +0x0bd:  mov    $0x0,%ebx
085c5144 +0x0c2:  jmp    085c531f <+0x29d>
085c5149 +0x0c7:  movl   $0x0,0x4(%esp)
085c5151 +0x0cf:  mov    0xc(%ebp),%eax
085c5154 +0x0d2:  mov    %eax,(%esp)
085c5157 +0x0d5:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085c515c +0x0da:  mov    %eax,%ebx
085c515e +0x0dc:  mov    0xc(%ebp),%eax
085c5161 +0x0df:  mov    %eax,(%esp)
085c5164 +0x0e2:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085c5169 +0x0e7:  movsbl %al,%eax
085c516c +0x0ea:  mov    %ebx,0x8(%esp)
085c5170 +0x0ee:  mov    %eax,0x4(%esp)
085c5174 +0x0f2:  mov    -0x14(%ebp),%eax
085c5177 +0x0f5:  mov    %eax,(%esp)
085c517a +0x0f8:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
085c517f +0x0fd:  xor    $0x1,%eax
085c5182 +0x100:  test   %al,%al
085c5184 +0x102:  je     085c51c6 <+0x144>
085c5186 +0x104:  movl   $0x5,0xc(%esp)
085c518e +0x10c:  movl   $0x23f,0x8(%esp)
085c5196 +0x114:  movl   $&_ZZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085c519e +0x11c:  lea    -0x4c(%ebp),%eax
085c51a1 +0x11f:  mov    %eax,(%esp)
085c51a4 +0x122:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c51a9 +0x127:  movl   $"G_GameWorld call failed",0x4(%esp)
085c51b1 +0x12f:  lea    -0x4c(%ebp),%eax
085c51b4 +0x132:  mov    %eax,(%esp)
085c51b7 +0x135:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c51bc +0x13a:  mov    $0x0,%ebx
085c51c1 +0x13f:  jmp    085c531f <+0x29d>
085c51c6 +0x144:  mov    0xc(%ebp),%eax
085c51c9 +0x147:  mov    %eax,0x4(%esp)
085c51cd +0x14b:  mov    -0x14(%ebp),%eax
085c51d0 +0x14e:  mov    %eax,(%esp)
085c51d3 +0x151:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
085c51d8 +0x156:  mov    %eax,-0x10(%ebp)
085c51db +0x159:  cmpl   $0x0,-0x10(%ebp)
085c51df +0x15d:  sete   %al
085c51e2 +0x160:  test   %al,%al
085c51e4 +0x162:  je     085c5226 <+0x1a4>
085c51e6 +0x164:  movl   $0x5,0xc(%esp)
085c51ee +0x16c:  movl   $0x246,0x8(%esp)
085c51f6 +0x174:  movl   $&_ZZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085c51fe +0x17c:  lea    -0x3c(%ebp),%eax
085c5201 +0x17f:  mov    %eax,(%esp)
085c5204 +0x182:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c5209 +0x187:  movl   $"getUserVillage call failed",0x4(%esp)
085c5211 +0x18f:  lea    -0x3c(%ebp),%eax
085c5214 +0x192:  mov    %eax,(%esp)
085c5217 +0x195:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c521c +0x19a:  mov    $0x0,%ebx
085c5221 +0x19f:  jmp    085c531f <+0x29d>
085c5226 +0x1a4:  movl   $0x0,0x4(%esp)
085c522e +0x1ac:  mov    0xc(%ebp),%eax
085c5231 +0x1af:  mov    %eax,(%esp)
085c5234 +0x1b2:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085c5239 +0x1b7:  mov    %eax,-0xc(%ebp)
085c523c +0x1ba:  mov    -0xc(%ebp),%eax
085c523f +0x1bd:  mov    %eax,0x4(%esp)
085c5243 +0x1c1:  mov    -0x10(%ebp),%eax
085c5246 +0x1c4:  mov    %eax,(%esp)
085c5249 +0x1c7:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
085c524e +0x1cc:  mov    %eax,-0x18(%ebp)
085c5251 +0x1cf:  cmpl   $0x0,-0x18(%ebp)
085c5255 +0x1d3:  sete   %al
085c5258 +0x1d6:  test   %al,%al
085c525a +0x1d8:  jne    085c52ab <+0x229>
085c525c +0x1da:  mov    -0x18(%ebp),%ebx
085c525f +0x1dd:  mov    0x4(%ebx),%eax
085c5262 +0x1e0:  cmp    $0x2,%eax
085c5265 +0x1e3:  jne    085c52a0 <+0x21e>
085c5267 +0x1e5:  mov    (%ebx),%eax
085c5269 +0x1e7:  cmp    $0x0,%eax
085c526c +0x1ea:  jne    085c52a0 <+0x21e>
085c526e +0x1ec:  jmp    085c531a <+0x298>
085c5273 +0x1f1:  or     %cl,0x489d445(%ebp)
085c5279 +0x1f7:  and    $0xe8,%al
085c527b +0x1f9:  cltd
085c527c +0x1fa:  movsb  %ds:(%esi),%es:(%edi)
085c527d +0x1fb:  clc
085c527e +0x1fc:  decl   0x4489f445(%ebx)
085c5284 +0x202:  and    $0x8,%al
085c5286 +0x204:  movl   $"getArea call failed (area no:%d)",0x4(%esp)
085c528e +0x20c:  lea    -0x2c(%ebp),%eax
085c5291 +0x20f:  mov    %eax,(%esp)
085c5294 +0x212:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c5299 +0x217:  mov    $0x0,%ebx
085c529e +0x21c:  jmp    085c531f <+0x29d>
085c52a0 +0x21e:  mov    -0x18(%ebp),%eax
085c52a3 +0x221:  mov    0x68(%eax),%eax
085c52a6 +0x224:  cmp    $0x4,%eax
085c52a9 +0x227:  jne    085c531a <+0x298>
085c52ab +0x229:  mov    $0x0,%ebx
085c52b0 +0x22e:  jmp    085c531f <+0x29d>
085c52b2 +0x230:  mov    %eax,(%esp)
085c52b5 +0x233:  call   08725ce0 <__cxa_begin_catch>
085c52ba +0x238:  call   0807dd70 <_init+0x668>
085c52bf +0x23d:  mov    (%eax),%eax
085c52c1 +0x23f:  mov    %eax,(%esp)
085c52c4 +0x242:  call   0807d730 <_init+0x28>
085c52c9 +0x247:  mov    %eax,0x14(%esp)
085c52cd +0x24b:  movl   $"[EXCEPTION IsAreaNearEntranceDungeon] - code = %s",0x10(%esp)
085c52d5 +0x253:  movl   $0x25c,0xc(%esp)
085c52dd +0x25b:  movl   $&_ZZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
085c52e5 +0x263:  movl   $"PrivateStore.cpp",0x4(%esp)
085c52ed +0x26b:  movl   $0x1,(%esp)
085c52f4 +0x272:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c52f9 +0x277:  mov    $0x0,%ebx
085c52fe +0x27c:  call   08725c30 <__cxa_end_catch>
085c5303 +0x281:  jmp    085c531f <+0x29d>
085c5305 +0x283:  mov    %edx,%ebx
085c5307 +0x285:  mov    %eax,%esi
085c5309 +0x287:  call   08725c30 <__cxa_end_catch>
085c530e +0x28c:  mov    %esi,%eax
085c5310 +0x28e:  mov    %ebx,%edx
085c5312 +0x290:  mov    %eax,(%esp)
085c5315 +0x293:  call   08ae3750 <_Unwind_Resume>
085c531a +0x298:  mov    $0x1,%ebx
085c531f +0x29d:  mov    %ebx,%eax
085c5321 +0x29f:  add    $0x90,%esp
085c5327 +0x2a5:  pop    %ebx
085c5328 +0x2a6:  pop    %esi
085c5329 +0x2a7:  pop    %ebp
085c532a +0x2a8:  ret
085c532b +0x2a9:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::IsAreaNearEntranceDungeon @ 0x85c5082

/* private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*) */

undefined4 __thiscall
private_store::CPrivateStore::IsAreaNearEntranceDungeon(CPrivateStore *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  GameWorld *local_18;
  Village *local_14;
  int local_10;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = (GameWorld *)0x0;
  local_14 = (Village *)0x0;
  local_10 = 0;
  if (param_1 == (CUser *)0x0) {
                    /* try { // try from 085c50d4 to 085c5298 has its CatchHandler @ 085c52b2 */
    cMyTrace::cMyTrace(local_70,
                       "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",0x233,
                       5);
    cMyTrace::operator()(local_70,"pUser == NULL");
    uVar4 = 0;
  }
  else {
    local_18 = (GameWorld *)G_GameWorld();
    if (local_18 == (GameWorld *)0x0) {
      cMyTrace::cMyTrace(local_60,
                         "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",
                         0x239,5);
      cMyTrace::operator()(local_60,"G_GameWorld call failed");
      uVar4 = 0;
    }
    else {
      iVar2 = CUser::get_area(param_1,false);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      cVar1 = GameWorld::check_valid_area(local_18,(int)cVar1,iVar2);
      if (cVar1 == '\x01') {
        local_14 = (Village *)GameWorld::getUserVillage(local_18,param_1);
        if (local_14 == (Village *)0x0) {
          cMyTrace::cMyTrace(local_40,
                             "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",
                             0x246,5);
          cMyTrace::operator()(local_40,"getUserVillage call failed");
          uVar4 = 0;
        }
        else {
          local_10 = CUser::get_area(param_1,false);
          piVar3 = (int *)Village::getArea(local_14,local_10);
          if ((piVar3 == (int *)0x0) ||
             (((piVar3[1] != 2 || (*piVar3 != 0)) && (piVar3[0x1a] == 4)))) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
      else {
        cMyTrace::cMyTrace(local_50,
                           "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",
                           0x23f,5);
        cMyTrace::operator()(local_50,"G_GameWorld call failed");
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```
