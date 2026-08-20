# IncrementBossStageEnd

`_ZN23CBossDungeonEntranceLog21IncrementBossStageEndER5CUserhjh`

`CBossDungeonEntranceLog::IncrementBossStageEnd(CUser&, unsigned char, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CBossDungeonEntranceLog` | `0x0815662e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815662e  _ZN23CBossDungeonEntranceLog21IncrementBossStageEndER5CUserhjh
#           CBossDungeonEntranceLog::IncrementBossStageEnd(CUser&, unsigned char, unsigned int, unsigned char)
# range [0x0815662e, 0x0815678d]
0815662e +0x000:  push   %ebp
0815662f +0x001:  mov    %esp,%ebp
08156631 +0x003:  sub    $0x78,%esp
08156634 +0x006:  mov    0x10(%ebp),%edx
08156637 +0x009:  mov    0x18(%ebp),%eax
0815663a +0x00c:  mov    %dl,-0x5c(%ebp)
0815663d +0x00f:  mov    %al,-0x60(%ebp)
08156640 +0x012:  movl   $0x0,-0x40(%ebp)
08156647 +0x019:  movzbl -0x5c(%ebp),%eax
0815664b +0x01d:  mov    %al,-0x40(%ebp)
0815664e +0x020:  mov    0xc(%ebp),%eax
08156651 +0x023:  mov    %eax,(%esp)
08156654 +0x026:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08156659 +0x02b:  mov    %al,-0x3f(%ebp)
0815665c +0x02e:  mov    0xc(%ebp),%eax
0815665f +0x031:  mov    %eax,(%esp)
08156662 +0x034:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08156667 +0x039:  mov    %al,-0x3e(%ebp)
0815666a +0x03c:  mov    0xc(%ebp),%eax
0815666d +0x03f:  mov    %eax,(%esp)
08156670 +0x042:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08156675 +0x047:  and    $0xf,%eax
08156678 +0x04a:  mov    %eax,%edx
0815667a +0x04c:  and    $0xf,%edx
0815667d +0x04f:  movzbl -0x3d(%ebp),%eax
08156681 +0x053:  and    $0xfffffff0,%eax
08156684 +0x056:  or     %edx,%eax
08156686 +0x058:  mov    %al,-0x3d(%ebp)
08156689 +0x05b:  movzbl -0x60(%ebp),%eax
0815668d +0x05f:  and    $0xf,%eax
08156690 +0x062:  mov    %eax,%edx
08156692 +0x064:  shl    $0x4,%edx
08156695 +0x067:  movzbl -0x3d(%ebp),%eax
08156699 +0x06b:  and    $0xf,%eax
0815669c +0x06e:  or     %edx,%eax
0815669e +0x070:  mov    %al,-0x3d(%ebp)
081566a1 +0x073:  mov    0x8(%ebp),%edx
081566a4 +0x076:  lea    -0x44(%ebp),%eax
081566a7 +0x079:  lea    -0x40(%ebp),%ecx
081566aa +0x07c:  mov    %ecx,0x8(%esp)
081566ae +0x080:  mov    %edx,0x4(%esp)
081566b2 +0x084:  mov    %eax,(%esp)
081566b5 +0x087:  call   08157464 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xc3>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xc3
081566ba +0x08c:  sub    $0x4,%esp
081566bd +0x08f:  mov    0x8(%ebp),%edx
081566c0 +0x092:  lea    -0x3c(%ebp),%eax
081566c3 +0x095:  mov    %edx,0x4(%esp)
081566c7 +0x099:  mov    %eax,(%esp)
081566ca +0x09c:  call   08157490 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xef>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xef
081566cf +0x0a1:  sub    $0x4,%esp
081566d2 +0x0a4:  lea    -0x3c(%ebp),%eax
081566d5 +0x0a7:  mov    %eax,0x4(%esp)
081566d9 +0x0ab:  lea    -0x44(%ebp),%eax
081566dc +0x0ae:  mov    %eax,(%esp)
081566df +0x0b1:  call   081574b6 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x115>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x115
081566e4 +0x0b6:  test   %al,%al
081566e6 +0x0b8:  je     08156763 <+0x135>
081566e8 +0x0ba:  movl   $0x10,0x8(%esp)
081566f0 +0x0c2:  movl   $0x0,0x4(%esp)
081566f8 +0x0ca:  lea    -0x54(%ebp),%eax
081566fb +0x0cd:  mov    %eax,(%esp)
081566fe +0x0d0:  call   0807dcc0 <_init+0x5b8>
08156703 +0x0d5:  movl   $0x1,-0x54(%ebp)
0815670a +0x0dc:  movl   $0x1,-0x50(%ebp)
08156711 +0x0e3:  mov    0x14(%ebp),%eax
08156714 +0x0e6:  mov    %eax,-0x48(%ebp)
08156717 +0x0e9:  lea    -0x1c(%ebp),%eax
0815671a +0x0ec:  lea    -0x54(%ebp),%edx
0815671d +0x0ef:  mov    %edx,0x8(%esp)
08156721 +0x0f3:  lea    -0x40(%ebp),%edx
08156724 +0x0f6:  mov    %edx,0x4(%esp)
08156728 +0x0fa:  mov    %eax,(%esp)
0815672b +0x0fd:  call   081574ca <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x129>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x129
08156730 +0x102:  sub    $0x4,%esp
08156733 +0x105:  lea    -0x1c(%ebp),%eax
08156736 +0x108:  mov    %eax,0x4(%esp)
0815673a +0x10c:  lea    -0x30(%ebp),%eax
0815673d +0x10f:  mov    %eax,(%esp)
08156740 +0x112:  call   08157508 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x167>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x167
08156745 +0x117:  mov    0x8(%ebp),%edx
08156748 +0x11a:  lea    -0x38(%ebp),%eax
0815674b +0x11d:  lea    -0x30(%ebp),%ecx
0815674e +0x120:  mov    %ecx,0x8(%esp)
08156752 +0x124:  mov    %edx,0x4(%esp)
08156756 +0x128:  mov    %eax,(%esp)
08156759 +0x12b:  call   0815754a <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1a9>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1a9
0815675e +0x130:  sub    $0x4,%esp
08156761 +0x133:  jmp    0815678b <+0x15d>
08156763 +0x135:  lea    -0x44(%ebp),%eax
08156766 +0x138:  mov    %eax,(%esp)
08156769 +0x13b:  call   08157576 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d5>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d5
0815676e +0x140:  mov    0x8(%eax),%edx
08156771 +0x143:  add    $0x1,%edx
08156774 +0x146:  mov    %edx,0x8(%eax)
08156777 +0x149:  lea    -0x44(%ebp),%eax
0815677a +0x14c:  mov    %eax,(%esp)
0815677d +0x14f:  call   08157576 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d5>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d5
08156782 +0x154:  mov    0x10(%eax),%edx
08156785 +0x157:  add    0x14(%ebp),%edx
08156788 +0x15a:  mov    %edx,0x10(%eax)
0815678b +0x15d:  leave
0815678c +0x15e:  ret
0815678d +0x15f:  nop
```

## 反编译 C

```c
// CBossDungeonEntranceLog::IncrementBossStageEnd @ 0x815662e

/* CBossDungeonEntranceLog::IncrementBossStageEnd(CUser&, unsigned char, unsigned int, unsigned
   char) */

void __thiscall
CBossDungeonEntranceLog::IncrementBossStageEnd
          (CBossDungeonEntranceLog *this,CUser *param_1,uchar param_2,uint param_3,uchar param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
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
  local_44 = CONCAT13(local_44._3_1_ | param_4 << 4,(undefined3)local_44);
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
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator->
                      (local_48);
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + param_3;
  }
  else {
    memset(&local_58,0,0x10);
    local_58 = 1;
    local_54 = 1;
    local_4c = param_3;
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
