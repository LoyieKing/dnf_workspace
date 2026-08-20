# dispatch

`_ZN29DB_UpdateDeathTowerBestRecord8dispatchEiiP6Stream`

`DB_UpdateDeathTowerBestRecord::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateDeathTowerBestRecord` | `0x0842a11e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842a11e  _ZN29DB_UpdateDeathTowerBestRecord8dispatchEiiP6Stream
#           DB_UpdateDeathTowerBestRecord::dispatch(int, int, Stream*)
# range [0x0842a11e, 0x0842a35d]
0842a11e +0x000:  push   %ebp
0842a11f +0x001:  mov    %esp,%ebp
0842a121 +0x003:  push   %edi
0842a122 +0x004:  push   %esi
0842a123 +0x005:  push   %ebx
0842a124 +0x006:  sub    $0x8c,%esp
0842a12a +0x00c:  mov    0x14(%ebp),%eax
0842a12d +0x00f:  mov    %eax,(%esp)
0842a130 +0x012:  call   08452422 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5038>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5038
0842a135 +0x017:  mov    %eax,-0x20(%ebp)
0842a138 +0x01a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842a13d +0x01f:  movl   $0x0,0x8(%esp)
0842a145 +0x027:  movl   $0x2,0x4(%esp)
0842a14d +0x02f:  mov    %eax,(%esp)
0842a150 +0x032:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842a155 +0x037:  mov    %eax,-0x1c(%ebp)
0842a158 +0x03a:  mov    -0x20(%ebp),%eax
0842a15b +0x03d:  mov    0x64(%eax),%edi
0842a15e +0x040:  mov    -0x20(%ebp),%eax
0842a161 +0x043:  movzwl 0x6(%eax),%eax
0842a165 +0x047:  movzwl %ax,%eax
0842a168 +0x04a:  mov    %eax,-0x4c(%ebp)
0842a16b +0x04d:  mov    -0x20(%ebp),%eax
0842a16e +0x050:  movzwl 0x4(%eax),%eax
0842a172 +0x054:  movzwl %ax,%eax
0842a175 +0x057:  mov    %eax,-0x48(%ebp)
0842a178 +0x05a:  mov    -0x20(%ebp),%eax
0842a17b +0x05d:  mov    (%eax),%eax
0842a17d +0x05f:  mov    %eax,-0x44(%ebp)
0842a180 +0x062:  mov    -0x20(%ebp),%eax
0842a183 +0x065:  movzwl 0x6(%eax),%eax
0842a187 +0x069:  movzwl %ax,%eax
0842a18a +0x06c:  mov    %eax,-0x40(%ebp)
0842a18d +0x06f:  mov    -0x20(%ebp),%eax
0842a190 +0x072:  mov    0x68(%eax),%eax
0842a193 +0x075:  mov    %eax,-0x3c(%ebp)
0842a196 +0x078:  mov    -0x20(%ebp),%eax
0842a199 +0x07b:  movzwl 0x6(%eax),%eax
0842a19d +0x07f:  movzwl %ax,%eax
0842a1a0 +0x082:  mov    %eax,-0x38(%ebp)
0842a1a3 +0x085:  mov    -0x20(%ebp),%eax
0842a1a6 +0x088:  mov    0x64(%eax),%esi
0842a1a9 +0x08b:  mov    -0x20(%ebp),%eax
0842a1ac +0x08e:  movzwl 0x6(%eax),%eax
0842a1b0 +0x092:  movzwl %ax,%ebx
0842a1b3 +0x095:  mov    -0x20(%ebp),%eax
0842a1b6 +0x098:  movzwl 0x6(%eax),%eax
0842a1ba +0x09c:  movzwl %ax,%eax
0842a1bd +0x09f:  imul   $0x17,%eax,%eax
0842a1c0 +0x0a2:  mov    %eax,%edx
0842a1c2 +0x0a4:  mov    -0x20(%ebp),%eax
0842a1c5 +0x0a7:  add    $0x8,%eax
0842a1c8 +0x0aa:  mov    %edx,0xc(%esp)
0842a1cc +0x0ae:  mov    %eax,0x8(%esp)
0842a1d0 +0x0b2:  movl   $0x0,0x4(%esp)
0842a1d8 +0x0ba:  mov    -0x1c(%ebp),%eax
0842a1db +0x0bd:  mov    %eax,(%esp)
0842a1de +0x0c0:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0842a1e3 +0x0c5:  mov    %eax,%edx
0842a1e5 +0x0c7:  mov    -0x20(%ebp),%eax
0842a1e8 +0x0ca:  movzwl 0x6(%eax),%eax
0842a1ec +0x0ce:  movzwl %ax,%eax
0842a1ef +0x0d1:  mov    %edi,0x30(%esp)
0842a1f3 +0x0d5:  mov    -0x4c(%ebp),%ecx
0842a1f6 +0x0d8:  mov    %ecx,0x2c(%esp)
0842a1fa +0x0dc:  mov    -0x48(%ebp),%ecx
0842a1fd +0x0df:  mov    %ecx,0x28(%esp)
0842a201 +0x0e3:  mov    -0x44(%ebp),%ecx
0842a204 +0x0e6:  mov    %ecx,0x24(%esp)
0842a208 +0x0ea:  mov    -0x40(%ebp),%ecx
0842a20b +0x0ed:  mov    %ecx,0x20(%esp)
0842a20f +0x0f1:  mov    -0x3c(%ebp),%ecx
0842a212 +0x0f4:  mov    %ecx,0x1c(%esp)
0842a216 +0x0f8:  mov    -0x38(%ebp),%ecx
0842a219 +0x0fb:  mov    %ecx,0x18(%esp)
0842a21d +0x0ff:  mov    %esi,0x14(%esp)
0842a221 +0x103:  mov    %ebx,0x10(%esp)
0842a225 +0x107:  mov    %edx,0xc(%esp)
0842a229 +0x10b:  mov    %eax,0x8(%esp)
0842a22d +0x10f:  movl   $"upDate charac_tower_record set member_info_%d='%s',stage_%d=%d,play_time_%d=%d,occ_time_%d=now() where charac_no=%d and tower_index=%d and stage_%d<=%d",0x4(%esp)
0842a235 +0x117:  mov    -0x1c(%ebp),%eax
0842a238 +0x11a:  mov    %eax,(%esp)
0842a23b +0x11d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842a240 +0x122:  movl   $0x1,0x4(%esp)
0842a248 +0x12a:  mov    -0x1c(%ebp),%eax
0842a24b +0x12d:  mov    %eax,(%esp)
0842a24e +0x130:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842a253 +0x135:  xor    $0x1,%eax
0842a256 +0x138:  test   %al,%al
0842a258 +0x13a:  jne    0842a26b <+0x14d>
0842a25a +0x13c:  mov    -0x1c(%ebp),%eax
0842a25d +0x13f:  mov    %eax,(%esp)
0842a260 +0x142:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842a265 +0x147:  or     %edx,%eax
0842a267 +0x149:  test   %eax,%eax
0842a269 +0x14b:  jne    0842a272 <+0x154>
0842a26b +0x14d:  mov    $0x1,%eax
0842a270 +0x152:  jmp    0842a277 <+0x159>
0842a272 +0x154:  mov    $0x0,%eax
0842a277 +0x159:  test   %al,%al
0842a279 +0x15b:  je     0842a34e <+0x230>
0842a27f +0x161:  mov    -0x20(%ebp),%eax
0842a282 +0x164:  mov    0x68(%eax),%ebx
0842a285 +0x167:  mov    -0x20(%ebp),%eax
0842a288 +0x16a:  mov    0x64(%eax),%edi
0842a28b +0x16d:  mov    -0x20(%ebp),%eax
0842a28e +0x170:  movzwl 0x6(%eax),%eax
0842a292 +0x174:  movzwl %ax,%eax
0842a295 +0x177:  imul   $0x17,%eax,%eax
0842a298 +0x17a:  mov    -0x20(%ebp),%edx
0842a29b +0x17d:  add    $0x8,%edx
0842a29e +0x180:  mov    %eax,0xc(%esp)
0842a2a2 +0x184:  mov    %edx,0x8(%esp)
0842a2a6 +0x188:  movl   $0x0,0x4(%esp)
0842a2ae +0x190:  mov    -0x1c(%ebp),%eax
0842a2b1 +0x193:  mov    %eax,(%esp)
0842a2b4 +0x196:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0842a2b9 +0x19b:  mov    %eax,%esi
0842a2bb +0x19d:  mov    -0x20(%ebp),%eax
0842a2be +0x1a0:  movzwl 0x4(%eax),%eax
0842a2c2 +0x1a4:  movzwl %ax,%eax
0842a2c5 +0x1a7:  mov    %eax,-0x34(%ebp)
0842a2c8 +0x1aa:  mov    -0x20(%ebp),%eax
0842a2cb +0x1ad:  mov    (%eax),%eax
0842a2cd +0x1af:  mov    %eax,-0x30(%ebp)
0842a2d0 +0x1b2:  mov    -0x20(%ebp),%eax
0842a2d3 +0x1b5:  movzwl 0x6(%eax),%eax
0842a2d7 +0x1b9:  movzwl %ax,%eax
0842a2da +0x1bc:  mov    %eax,-0x2c(%ebp)
0842a2dd +0x1bf:  mov    -0x20(%ebp),%eax
0842a2e0 +0x1c2:  movzwl 0x6(%eax),%eax
0842a2e4 +0x1c6:  movzwl %ax,%ecx
0842a2e7 +0x1c9:  mov    -0x20(%ebp),%eax
0842a2ea +0x1cc:  movzwl 0x6(%eax),%eax
0842a2ee +0x1d0:  movzwl %ax,%edx
0842a2f1 +0x1d3:  mov    -0x20(%ebp),%eax
0842a2f4 +0x1d6:  movzwl 0x6(%eax),%eax
0842a2f8 +0x1da:  movzwl %ax,%eax
0842a2fb +0x1dd:  mov    %ebx,0x28(%esp)
0842a2ff +0x1e1:  mov    %edi,0x24(%esp)
0842a303 +0x1e5:  mov    %esi,0x20(%esp)
0842a307 +0x1e9:  mov    -0x34(%ebp),%ebx
0842a30a +0x1ec:  mov    %ebx,0x1c(%esp)
0842a30e +0x1f0:  mov    -0x30(%ebp),%ebx
0842a311 +0x1f3:  mov    %ebx,0x18(%esp)
0842a315 +0x1f7:  mov    -0x2c(%ebp),%ebx
0842a318 +0x1fa:  mov    %ebx,0x14(%esp)
0842a31c +0x1fe:  mov    %ecx,0x10(%esp)
0842a320 +0x202:  mov    %edx,0xc(%esp)
0842a324 +0x206:  mov    %eax,0x8(%esp)
0842a328 +0x20a:  movl   $"inSert into charac_tower_record(charac_no,tower_index,member_info_%d,stage_%d,play_time_%d,occ_time_%d) values(%d,%d,'%s',%d,%d,now())",0x4(%esp)
0842a330 +0x212:  mov    -0x1c(%ebp),%eax
0842a333 +0x215:  mov    %eax,(%esp)
0842a336 +0x218:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842a33b +0x21d:  movl   $0x1,0x4(%esp)
0842a343 +0x225:  mov    -0x1c(%ebp),%eax
0842a346 +0x228:  mov    %eax,(%esp)
0842a349 +0x22b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842a34e +0x230:  mov    $0x1,%eax
0842a353 +0x235:  add    $0x8c,%esp
0842a359 +0x23b:  pop    %ebx
0842a35a +0x23c:  pop    %esi
0842a35b +0x23d:  pop    %edi
0842a35c +0x23e:  pop    %ebp
0842a35d +0x23f:  ret
```

## 反编译 C

```c
// DB_UpdateDeathTowerBestRecord::dispatch @ 0x842a11e

/* DB_UpdateDeathTowerBestRecord::dispatch(int, int, Stream*) */

undefined4 DB_UpdateDeathTowerBestRecord::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  SIG_DEATH_TOWER_UPDATE_BEST_RECORD *pSVar11;
  MySQL *this;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  Stream *in_stack_00000010;
  
  pSVar11 = Stream::GetOutBuffer<SIG_DEATH_TOWER_UPDATE_BEST_RECORD>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar6 = *(undefined4 *)(pSVar11 + 100);
  uVar1 = *(ushort *)(pSVar11 + 6);
  uVar2 = *(ushort *)(pSVar11 + 4);
  uVar7 = *(undefined4 *)pSVar11;
  uVar3 = *(ushort *)(pSVar11 + 6);
  uVar13 = *(undefined4 *)(pSVar11 + 0x68);
  uVar4 = *(ushort *)(pSVar11 + 6);
  uVar8 = *(undefined4 *)(pSVar11 + 100);
  uVar5 = *(ushort *)(pSVar11 + 6);
  uVar12 = MySQL::blob_to_str(this,0,pSVar11 + 8,(uint)*(ushort *)(pSVar11 + 6) * 0x17);
  MySQL::set_query(this,
                   "upDate charac_tower_record set member_info_%d=\'%s\',stage_%d=%d,play_time_%d=%d,occ_time_%d=now() where charac_no=%d and tower_index=%d and stage_%d<=%d"
                   ,(uint)*(ushort *)(pSVar11 + 6),uVar12,(uint)uVar5,uVar8,(uint)uVar4,uVar13,
                   (uint)uVar3,uVar7,(uint)uVar2,(uint)uVar1,uVar6);
  cVar10 = MySQL::exec(this,true);
  if (cVar10 == '\x01') {
    lVar14 = MySQL::getAffectedRowCount(this);
    if (lVar14 != 0) {
      bVar9 = false;
      goto LAB_0842a277;
    }
  }
  bVar9 = true;
LAB_0842a277:
  if (bVar9) {
    uVar6 = *(undefined4 *)(pSVar11 + 0x68);
    uVar7 = *(undefined4 *)(pSVar11 + 100);
    uVar13 = MySQL::blob_to_str(this,0,pSVar11 + 8,(uint)*(ushort *)(pSVar11 + 6) * 0x17);
    MySQL::set_query(this,
                     "inSert into charac_tower_record(charac_no,tower_index,member_info_%d,stage_%d,play_time_%d,occ_time_%d) values(%d,%d,\'%s\',%d,%d,now())"
                     ,(uint)*(ushort *)(pSVar11 + 6),(uint)*(ushort *)(pSVar11 + 6),
                     (uint)*(ushort *)(pSVar11 + 6),(uint)*(ushort *)(pSVar11 + 6),
                     *(undefined4 *)pSVar11,(uint)*(ushort *)(pSVar11 + 4),uVar13,uVar7,uVar6);
    MySQL::exec(this,true);
  }
  return 1;
}
```
