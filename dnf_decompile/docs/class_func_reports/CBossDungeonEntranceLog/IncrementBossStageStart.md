# IncrementBossStageStart

`_ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh`

`CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CBossDungeonEntranceLog` | `0x081564f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081564f0  _ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh
#           CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)
# range [0x081564f0, 0x0815662d]
081564f0 +0x000:  push   %ebp
081564f1 +0x001:  mov    %esp,%ebp
081564f3 +0x003:  sub    $0x78,%esp
081564f6 +0x006:  mov    0x10(%ebp),%edx
081564f9 +0x009:  mov    0x14(%ebp),%eax
081564fc +0x00c:  mov    %dl,-0x5c(%ebp)
081564ff +0x00f:  mov    %al,-0x60(%ebp)
08156502 +0x012:  movl   $0x0,-0x40(%ebp)
08156509 +0x019:  movzbl -0x5c(%ebp),%eax
0815650d +0x01d:  mov    %al,-0x40(%ebp)
08156510 +0x020:  mov    0xc(%ebp),%eax
08156513 +0x023:  mov    %eax,(%esp)
08156516 +0x026:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0815651b +0x02b:  mov    %al,-0x3f(%ebp)
0815651e +0x02e:  mov    0xc(%ebp),%eax
08156521 +0x031:  mov    %eax,(%esp)
08156524 +0x034:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08156529 +0x039:  mov    %al,-0x3e(%ebp)
0815652c +0x03c:  mov    0xc(%ebp),%eax
0815652f +0x03f:  mov    %eax,(%esp)
08156532 +0x042:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08156537 +0x047:  and    $0xf,%eax
0815653a +0x04a:  mov    %eax,%edx
0815653c +0x04c:  and    $0xf,%edx
0815653f +0x04f:  movzbl -0x3d(%ebp),%eax
08156543 +0x053:  and    $0xfffffff0,%eax
08156546 +0x056:  or     %edx,%eax
08156548 +0x058:  mov    %al,-0x3d(%ebp)
0815654b +0x05b:  movzbl -0x60(%ebp),%eax
0815654f +0x05f:  and    $0xf,%eax
08156552 +0x062:  mov    %eax,%edx
08156554 +0x064:  shl    $0x4,%edx
08156557 +0x067:  movzbl -0x3d(%ebp),%eax
0815655b +0x06b:  and    $0xf,%eax
0815655e +0x06e:  or     %edx,%eax
08156560 +0x070:  mov    %al,-0x3d(%ebp)
08156563 +0x073:  mov    0x8(%ebp),%edx
08156566 +0x076:  lea    -0x44(%ebp),%eax
08156569 +0x079:  lea    -0x40(%ebp),%ecx
0815656c +0x07c:  mov    %ecx,0x8(%esp)
08156570 +0x080:  mov    %edx,0x4(%esp)
08156574 +0x084:  mov    %eax,(%esp)
08156577 +0x087:  call   08157464 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xc3>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xc3
0815657c +0x08c:  sub    $0x4,%esp
0815657f +0x08f:  mov    0x8(%ebp),%edx
08156582 +0x092:  lea    -0x3c(%ebp),%eax
08156585 +0x095:  mov    %edx,0x4(%esp)
08156589 +0x099:  mov    %eax,(%esp)
0815658c +0x09c:  call   08157490 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xef>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xef
08156591 +0x0a1:  sub    $0x4,%esp
08156594 +0x0a4:  lea    -0x3c(%ebp),%eax
08156597 +0x0a7:  mov    %eax,0x4(%esp)
0815659b +0x0ab:  lea    -0x44(%ebp),%eax
0815659e +0x0ae:  mov    %eax,(%esp)
081565a1 +0x0b1:  call   081574b6 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x115>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x115
081565a6 +0x0b6:  test   %al,%al
081565a8 +0x0b8:  je     08156618 <+0x128>
081565aa +0x0ba:  movl   $0x10,0x8(%esp)
081565b2 +0x0c2:  movl   $0x0,0x4(%esp)
081565ba +0x0ca:  lea    -0x54(%ebp),%eax
081565bd +0x0cd:  mov    %eax,(%esp)
081565c0 +0x0d0:  call   0807dcc0 <_init+0x5b8>
081565c5 +0x0d5:  movl   $0x1,-0x54(%ebp)
081565cc +0x0dc:  lea    -0x1c(%ebp),%eax
081565cf +0x0df:  lea    -0x54(%ebp),%edx
081565d2 +0x0e2:  mov    %edx,0x8(%esp)
081565d6 +0x0e6:  lea    -0x40(%ebp),%edx
081565d9 +0x0e9:  mov    %edx,0x4(%esp)
081565dd +0x0ed:  mov    %eax,(%esp)
081565e0 +0x0f0:  call   081574ca <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x129>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x129
081565e5 +0x0f5:  sub    $0x4,%esp
081565e8 +0x0f8:  lea    -0x1c(%ebp),%eax
081565eb +0x0fb:  mov    %eax,0x4(%esp)
081565ef +0x0ff:  lea    -0x30(%ebp),%eax
081565f2 +0x102:  mov    %eax,(%esp)
081565f5 +0x105:  call   08157508 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x167>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x167
081565fa +0x10a:  mov    0x8(%ebp),%edx
081565fd +0x10d:  lea    -0x38(%ebp),%eax
08156600 +0x110:  lea    -0x30(%ebp),%ecx
08156603 +0x113:  mov    %ecx,0x8(%esp)
08156607 +0x117:  mov    %edx,0x4(%esp)
0815660b +0x11b:  mov    %eax,(%esp)
0815660e +0x11e:  call   0815754a <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1a9>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1a9
08156613 +0x123:  sub    $0x4,%esp
08156616 +0x126:  jmp    0815662c <+0x13c>
08156618 +0x128:  lea    -0x44(%ebp),%eax
0815661b +0x12b:  mov    %eax,(%esp)
0815661e +0x12e:  call   08157576 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d5>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d5
08156623 +0x133:  mov    0x4(%eax),%edx
08156626 +0x136:  add    $0x1,%edx
08156629 +0x139:  mov    %edx,0x4(%eax)
0815662c +0x13c:  leave
0815662d +0x13d:  ret
```

## 反编译 C

```c
// CBossDungeonEntranceLog::IncrementBossStageStart @ 0x81564f0

/* CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char) */

void __thiscall
CBossDungeonEntranceLog::IncrementBossStageStart
          (CBossDungeonEntranceLog *this,CUser *param_1,uchar param_2,uchar param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_58 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> local_48 [4];
  undefined4 local_44;
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_40 [4];
  pair local_3c [8];
  pair<unsigned_int_const,STBossDungeonTowerLog> local_34 [20];
  uint local_20 [7];
  
  local_44 = (uint)param_2;
  uVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_44._0_2_ = CONCAT11(uVar1,local_44._0_1_);
  uVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_44._0_3_ = CONCAT12(uVar1,(undefined2)local_44);
  uVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_44 = CONCAT13(uVar1,(undefined3)local_44) & 0xfffffff;
  local_44 = CONCAT13(local_44._3_1_ | param_3 << 4,(undefined3)local_44);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::find((uint *)local_48);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::end(local_40);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator==
                    (local_48,(_Rb_tree_iterator *)local_40);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator->
                      (local_48);
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  }
  else {
    memset(local_58,0,0x10);
    local_58[0] = 1;
    std::make_pair<unsigned_int&,STBossDungeonTowerLog&>
              (local_20,(STBossDungeonTowerLog *)&local_44);
    std::pair<unsigned_int_const,STBossDungeonTowerLog>::pair<unsigned_int,STBossDungeonTowerLog>
              (local_34,(pair *)local_20);
    std::
    map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
    ::insert(local_3c);
  }
  return;
}
```
