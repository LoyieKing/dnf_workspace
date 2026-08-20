# _regist_auction

`_ZN13random_option27CRandomOptionItemHandleTest15_regist_auctionER10Inven_ItemxiiPKc`

`random_option::CRandomOptionItemHandleTest::_regist_auction(Inven_Item&, long long, int, int, char const*)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandleTest` | `0x085f3dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f3dba  _ZN13random_option27CRandomOptionItemHandleTest15_regist_auctionER10Inven_ItemxiiPKc
#           random_option::CRandomOptionItemHandleTest::_regist_auction(Inven_Item&, long long, int, int, char const*)
# range [0x085f3dba, 0x085f3f93]
085f3dba +0x000:  push   %ebp
085f3dbb +0x001:  mov    %esp,%ebp
085f3dbd +0x003:  push   %edi
085f3dbe +0x004:  push   %esi
085f3dbf +0x005:  push   %ebx
085f3dc0 +0x006:  sub    $0xbc,%esp
085f3dc6 +0x00c:  mov    0x10(%ebp),%eax
085f3dc9 +0x00f:  mov    %eax,-0x30(%ebp)
085f3dcc +0x012:  mov    0x14(%ebp),%eax
085f3dcf +0x015:  mov    %eax,-0x2c(%ebp)
085f3dd2 +0x018:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
085f3dd7 +0x01d:  movl   $0x0,0x8(%esp)
085f3ddf +0x025:  movl   $0xc,0x4(%esp)
085f3de7 +0x02d:  mov    %eax,(%esp)
085f3dea +0x030:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
085f3def +0x035:  mov    %eax,-0x1c(%ebp)
085f3df2 +0x038:  mov    0xc(%ebp),%eax
085f3df5 +0x03b:  add    $0x25,%eax
085f3df8 +0x03e:  movl   $0xe,0xc(%esp)
085f3e00 +0x046:  mov    %eax,0x8(%esp)
085f3e04 +0x04a:  movl   $0x1,0x4(%esp)
085f3e0c +0x052:  mov    -0x1c(%ebp),%eax
085f3e0f +0x055:  mov    %eax,(%esp)
085f3e12 +0x058:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
085f3e17 +0x05d:  mov    %eax,%esi
085f3e19 +0x05f:  mov    0xc(%ebp),%eax
085f3e1c +0x062:  add    $0x15,%eax
085f3e1f +0x065:  movl   $0xa,0xc(%esp)
085f3e27 +0x06d:  mov    %eax,0x8(%esp)
085f3e2b +0x071:  movl   $0x0,0x4(%esp)
085f3e33 +0x079:  mov    -0x1c(%ebp),%eax
085f3e36 +0x07c:  mov    %eax,(%esp)
085f3e39 +0x07f:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
085f3e3e +0x084:  mov    %eax,-0x4c(%ebp)
085f3e41 +0x087:  mov    0xc(%ebp),%eax
085f3e44 +0x08a:  add    $0x11,%eax
085f3e47 +0x08d:  mov    %eax,(%esp)
085f3e4a +0x090:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085f3e4f +0x095:  movzwl %ax,%eax
085f3e52 +0x098:  mov    %eax,-0x48(%ebp)
085f3e55 +0x09b:  mov    0xc(%ebp),%eax
085f3e58 +0x09e:  add    $0x11,%eax
085f3e5b +0x0a1:  mov    %eax,(%esp)
085f3e5e +0x0a4:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085f3e63 +0x0a9:  movzbl %al,%eax
085f3e66 +0x0ac:  mov    %eax,-0x44(%ebp)
085f3e69 +0x0af:  mov    0xc(%ebp),%eax
085f3e6c +0x0b2:  mov    0xd(%eax),%eax
085f3e6f +0x0b5:  mov    %eax,-0x40(%ebp)
085f3e72 +0x0b8:  mov    0xc(%ebp),%eax
085f3e75 +0x0bb:  movzwl 0xb(%eax),%eax
085f3e79 +0x0bf:  movzwl %ax,%eax
085f3e7c +0x0c2:  mov    %eax,-0x3c(%ebp)
085f3e7f +0x0c5:  mov    0xc(%ebp),%eax
085f3e82 +0x0c8:  movzbl 0x6(%eax),%eax
085f3e86 +0x0cc:  shr    $0x5,%al
085f3e89 +0x0cf:  movzbl %al,%eax
085f3e8c +0x0d2:  mov    %eax,-0x38(%ebp)
085f3e8f +0x0d5:  mov    0xc(%ebp),%eax
085f3e92 +0x0d8:  movzbl 0x6(%eax),%eax
085f3e96 +0x0dc:  and    $0x1f,%eax
085f3e99 +0x0df:  movzbl %al,%eax
085f3e9c +0x0e2:  mov    %eax,-0x34(%ebp)
085f3e9f +0x0e5:  mov    0xc(%ebp),%eax
085f3ea2 +0x0e8:  mov    0x7(%eax),%edi
085f3ea5 +0x0eb:  mov    0xc(%ebp),%eax
085f3ea8 +0x0ee:  mov    0x2(%eax),%ebx
085f3eab +0x0f1:  mov    0xc(%ebp),%eax
085f3eae +0x0f4:  movzbl (%eax),%eax
085f3eb1 +0x0f7:  movzbl %al,%ecx
085f3eb4 +0x0fa:  mov    0x18(%ebp),%eax
085f3eb7 +0x0fd:  lea    0x3f480(%eax),%edx
085f3ebd +0x103:  mov    %esi,0x64(%esp)
085f3ec1 +0x107:  movl   $0x0,0x60(%esp)
085f3ec9 +0x10f:  movl   $0x1,0x5c(%esp)
085f3ed1 +0x117:  mov    -0x4c(%ebp),%eax
085f3ed4 +0x11a:  mov    %eax,0x58(%esp)
085f3ed8 +0x11e:  movl   $0x0,0x54(%esp)
085f3ee0 +0x126:  mov    -0x48(%ebp),%eax
085f3ee3 +0x129:  mov    %eax,0x50(%esp)
085f3ee7 +0x12d:  mov    -0x44(%ebp),%eax
085f3eea +0x130:  mov    %eax,0x4c(%esp)
085f3eee +0x134:  mov    -0x40(%ebp),%eax
085f3ef1 +0x137:  mov    %eax,0x48(%esp)
085f3ef5 +0x13b:  mov    -0x3c(%ebp),%eax
085f3ef8 +0x13e:  mov    %eax,0x44(%esp)
085f3efc +0x142:  mov    -0x38(%ebp),%eax
085f3eff +0x145:  mov    %eax,0x40(%esp)
085f3f03 +0x149:  mov    -0x34(%ebp),%eax
085f3f06 +0x14c:  mov    %eax,0x3c(%esp)
085f3f0a +0x150:  mov    %edi,0x38(%esp)
085f3f0e +0x154:  mov    %ebx,0x34(%esp)
085f3f12 +0x158:  mov    %ecx,0x30(%esp)
085f3f16 +0x15c:  movl   $0x2,0x2c(%esp)
085f3f1e +0x164:  movl   $0x1,0x28(%esp)
085f3f26 +0x16c:  movl   $"",0x24(%esp)
085f3f2e +0x174:  movl   $0xffffffff,0x20(%esp)
085f3f36 +0x17c:  mov    0x20(%ebp),%eax
085f3f39 +0x17f:  mov    %eax,0x1c(%esp)
085f3f3d +0x183:  mov    0x1c(%ebp),%eax
085f3f40 +0x186:  mov    %eax,0x18(%esp)
085f3f44 +0x18a:  mov    %edx,0x14(%esp)
085f3f48 +0x18e:  mov    0x18(%ebp),%eax
085f3f4b +0x191:  mov    %eax,0x10(%esp)
085f3f4f +0x195:  mov    -0x30(%ebp),%eax
085f3f52 +0x198:  mov    -0x2c(%ebp),%edx
085f3f55 +0x19b:  mov    %eax,0x8(%esp)
085f3f59 +0x19f:  mov    %edx,0xc(%esp)
085f3f5d +0x1a3:  movl   $"inSert into auction_main(auction_id,occ_time,expire_time,owner_id,owner_name,buyer_id,buyer_name,price,instant_price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,amplify_option,amplify_value,owner_type,item_guid,unit_price,black_point,random_option) values(%llu,from_unixtime(%d),%d,%d,'%s',%d,'%s',%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%hu,%hhu,%hu,%hhu,'%s',%d,%d,'%s')",0x4(%esp)
085f3f65 +0x1ab:  mov    -0x1c(%ebp),%eax
085f3f68 +0x1ae:  mov    %eax,(%esp)
085f3f6b +0x1b1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
085f3f70 +0x1b6:  movl   $0x1,0x4(%esp)
085f3f78 +0x1be:  mov    -0x1c(%ebp),%eax
085f3f7b +0x1c1:  mov    %eax,(%esp)
085f3f7e +0x1c4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
085f3f83 +0x1c9:  mov    $0x1,%eax
085f3f88 +0x1ce:  add    $0xbc,%esp
085f3f8e +0x1d4:  pop    %ebx
085f3f8f +0x1d5:  pop    %esi
085f3f90 +0x1d6:  pop    %edi
085f3f91 +0x1d7:  pop    %ebp
085f3f92 +0x1d8:  ret
085f3f93 +0x1d9:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandleTest::_regist_auction @ 0x85f3dba

/* random_option::CRandomOptionItemHandleTest::_regist_auction(Inven_Item&, long long, int, int,
   char const*) */

undefined4
random_option::CRandomOptionItemHandleTest::_regist_auction
          (Inven_Item *param_1,longlong param_2,int param_3,int param_4,char *param_5)

{
  MySQL *this;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_stack_0000001c;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xc,0);
  uVar1 = MySQL::blob_to_str(this,1,(byte *)param_2 + 0x25,0xe);
  uVar2 = MySQL::blob_to_str(this,0,(byte *)param_2 + 0x15,10);
  uVar3 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((byte *)param_2 + 0x11));
  uVar4 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((byte *)param_2 + 0x11));
  MySQL::set_query(this,
                   "inSert into auction_main(auction_id,occ_time,expire_time,owner_id,owner_name,buyer_id,buyer_name,price,instant_price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,amplify_option,amplify_value,owner_type,item_guid,unit_price,black_point,random_option) values(%llu,from_unixtime(%d),%d,%d,\'%s\',%d,\'%s\',%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%hu,%hhu,%hu,%hhu,\'%s\',%d,%d,\'%s\')"
                   ,param_2._4_4_,param_3,param_4,param_4 + 0x3f480,param_5,in_stack_0000001c,
                   0xffffffff,&DAT_08cd0155,1,2,(uint)*(byte *)param_2,
                   *(undefined4 *)((byte *)param_2 + 2),*(undefined4 *)((byte *)param_2 + 7),
                   (uint)(((byte *)param_2)[6] & 0x1f),(uint)(((byte *)param_2)[6] >> 5),
                   (uint)*(ushort *)((byte *)param_2 + 0xb),*(undefined4 *)((byte *)param_2 + 0xd),
                   uVar4 & 0xff,uVar3 & 0xffff,0,uVar2,1,0,uVar1);
  MySQL::exec(this,true);
  return 1;
}
```
