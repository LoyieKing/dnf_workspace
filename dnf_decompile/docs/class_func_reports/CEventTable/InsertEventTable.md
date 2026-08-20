# InsertEventTable

`_ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE`

`CEventTable::InsertEventTable(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CEventTable` | `0x0811a4d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811a4d4  _ZN11CEventTable16InsertEventTableERSt6vectorIiSaIiEE
#           CEventTable::InsertEventTable(std::vector<int, std::allocator<int> >&)
# range [0x0811a4d4, 0x0811a7a3]
0811a4d4 +0x000:  push   %ebp
0811a4d5 +0x001:  mov    %esp,%ebp
0811a4d7 +0x003:  push   %edi
0811a4d8 +0x004:  push   %esi
0811a4d9 +0x005:  push   %ebx
0811a4da +0x006:  sub    $0x15c,%esp
0811a4e0 +0x00c:  mov    0x8(%ebp),%eax
0811a4e3 +0x00f:  mov    %eax,(%esp)
0811a4e6 +0x012:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0811a4eb +0x017:  xor    $0x1,%eax
0811a4ee +0x01a:  test   %al,%al
0811a4f0 +0x01c:  je     0811a792 <+0x2be>
0811a4f6 +0x022:  lea    -0x12f(%ebp),%edx
0811a4fc +0x028:  mov    $0xff,%ebx
0811a501 +0x02d:  mov    $0x0,%eax
0811a506 +0x032:  mov    %edx,%ecx
0811a508 +0x034:  and    $0x1,%ecx
0811a50b +0x037:  test   %ecx,%ecx
0811a50d +0x039:  je     0811a517 <+0x43>
0811a50f +0x03b:  mov    %al,(%edx)
0811a511 +0x03d:  add    $0x1,%edx
0811a514 +0x040:  sub    $0x1,%ebx
0811a517 +0x043:  mov    %edx,%ecx
0811a519 +0x045:  and    $0x2,%ecx
0811a51c +0x048:  test   %ecx,%ecx
0811a51e +0x04a:  je     0811a529 <+0x55>
0811a520 +0x04c:  mov    %ax,(%edx)
0811a523 +0x04f:  add    $0x2,%edx
0811a526 +0x052:  sub    $0x2,%ebx
0811a529 +0x055:  mov    %ebx,%ecx
0811a52b +0x057:  shr    $0x2,%ecx
0811a52e +0x05a:  mov    %edx,%edi
0811a530 +0x05c:  rep stos %eax,%es:(%edi)
0811a532 +0x05e:  mov    %edi,%edx
0811a534 +0x060:  mov    %ebx,%ecx
0811a536 +0x062:  and    $0x2,%ecx
0811a539 +0x065:  test   %ecx,%ecx
0811a53b +0x067:  je     0811a543 <+0x6f>
0811a53d +0x069:  mov    %ax,(%edx)
0811a540 +0x06c:  add    $0x2,%edx
0811a543 +0x06f:  mov    %ebx,%ecx
0811a545 +0x071:  and    $0x1,%ecx
0811a548 +0x074:  test   %ecx,%ecx
0811a54a +0x076:  je     0811a551 <+0x7d>
0811a54c +0x078:  mov    %al,(%edx)
0811a54e +0x07a:  add    $0x1,%edx
0811a551 +0x07d:  lea    -0x2c(%ebp),%eax
0811a554 +0x080:  mov    %eax,(%esp)
0811a557 +0x083:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0811a55c +0x088:  lea    -0x30(%ebp),%eax
0811a55f +0x08b:  mov    0x8(%ebp),%edx
0811a562 +0x08e:  mov    %edx,0x4(%esp)
0811a566 +0x092:  mov    %eax,(%esp)
0811a569 +0x095:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0811a56e +0x09a:  sub    $0x4,%esp
0811a571 +0x09d:  jmp    0811a69c <+0x1c8>
0811a576 +0x0a2:  lea    -0x30(%ebp),%eax
0811a579 +0x0a5:  mov    %eax,(%esp)
0811a57c +0x0a8:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0811a581 +0x0ad:  mov    (%eax),%edx
0811a583 +0x0af:  mov    %edx,%eax
0811a585 +0x0b1:  shl    $0x2,%eax
0811a588 +0x0b4:  add    %edx,%eax
0811a58a +0x0b6:  shl    $0x2,%eax
0811a58d +0x0b9:  mov    &events+0x10(%eax),%eax
0811a593 +0x0bf:  movl   $0x0,0xc(%esp)
0811a59b +0x0c7:  mov    %eax,0x8(%esp)
0811a59f +0x0cb:  movl   $0x4,0x4(%esp)
0811a5a7 +0x0d3:  movl   $&g_scriptStringManager_,(%esp)
0811a5ae +0x0da:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0811a5b3 +0x0df:  mov    %eax,%ebx
0811a5b5 +0x0e1:  lea    -0x30(%ebp),%eax
0811a5b8 +0x0e4:  mov    %eax,(%esp)
0811a5bb +0x0e7:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0811a5c0 +0x0ec:  mov    (%eax),%edx
0811a5c2 +0x0ee:  mov    %edx,%eax
0811a5c4 +0x0f0:  shl    $0x2,%eax
0811a5c7 +0x0f3:  add    %edx,%eax
0811a5c9 +0x0f5:  shl    $0x2,%eax
0811a5cc +0x0f8:  mov    &events+0xc(%eax),%eax
0811a5d2 +0x0fe:  mov    %eax,-0x13c(%ebp)
0811a5d8 +0x104:  lea    -0x30(%ebp),%eax
0811a5db +0x107:  mov    %eax,(%esp)
0811a5de +0x10a:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0811a5e3 +0x10f:  mov    (%eax),%edx
0811a5e5 +0x111:  mov    %edx,%eax
0811a5e7 +0x113:  shl    $0x2,%eax
0811a5ea +0x116:  add    %edx,%eax
0811a5ec +0x118:  shl    $0x2,%eax
0811a5ef +0x11b:  mov    &events+0x4(%eax),%edi
0811a5f5 +0x121:  lea    -0x30(%ebp),%eax
0811a5f8 +0x124:  mov    %eax,(%esp)
0811a5fb +0x127:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0811a600 +0x12c:  mov    (%eax),%edx
0811a602 +0x12e:  mov    %edx,%eax
0811a604 +0x130:  shl    $0x2,%eax
0811a607 +0x133:  add    %edx,%eax
0811a609 +0x135:  shl    $0x2,%eax
0811a60c +0x138:  mov    &events(%eax),%eax
0811a612 +0x13e:  mov    %ebx,0x14(%esp)
0811a616 +0x142:  mov    -0x13c(%ebp),%edx
0811a61c +0x148:  mov    %edx,0x10(%esp)
0811a620 +0x14c:  mov    %edi,0xc(%esp)
0811a624 +0x150:  mov    %eax,0x8(%esp)
0811a628 +0x154:  movl   $"(%d,%d,'%s','%s')",0x4(%esp)
0811a630 +0x15c:  lea    -0x12f(%ebp),%eax
0811a636 +0x162:  mov    %eax,(%esp)
0811a639 +0x165:  call   0807e440 <_init+0xd38>
0811a63e +0x16a:  lea    -0x12f(%ebp),%eax
0811a644 +0x170:  mov    %eax,0x4(%esp)
0811a648 +0x174:  lea    -0x2c(%ebp),%eax
0811a64b +0x177:  mov    %eax,(%esp)
0811a64e +0x17a:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0811a653 +0x17f:  lea    -0x30(%ebp),%eax
0811a656 +0x182:  mov    %eax,(%esp)
0811a659 +0x185:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0811a65e +0x18a:  lea    -0x24(%ebp),%eax
0811a661 +0x18d:  mov    0x8(%ebp),%edx
0811a664 +0x190:  mov    %edx,0x4(%esp)
0811a668 +0x194:  mov    %eax,(%esp)
0811a66b +0x197:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0811a670 +0x19c:  sub    $0x4,%esp
0811a673 +0x19f:  lea    -0x24(%ebp),%eax
0811a676 +0x1a2:  mov    %eax,0x4(%esp)
0811a67a +0x1a6:  lea    -0x30(%ebp),%eax
0811a67d +0x1a9:  mov    %eax,(%esp)
0811a680 +0x1ac:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0811a685 +0x1b1:  test   %al,%al
0811a687 +0x1b3:  je     0811a69c <+0x1c8>
0811a689 +0x1b5:  movl   $",",0x4(%esp)
0811a691 +0x1bd:  lea    -0x2c(%ebp),%eax
0811a694 +0x1c0:  mov    %eax,(%esp)
0811a697 +0x1c3:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0811a69c +0x1c8:  lea    -0x28(%ebp),%eax
0811a69f +0x1cb:  mov    0x8(%ebp),%edx
0811a6a2 +0x1ce:  mov    %edx,0x4(%esp)
0811a6a6 +0x1d2:  mov    %eax,(%esp)
0811a6a9 +0x1d5:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0811a6ae +0x1da:  sub    $0x4,%esp
0811a6b1 +0x1dd:  lea    -0x28(%ebp),%eax
0811a6b4 +0x1e0:  mov    %eax,0x4(%esp)
0811a6b8 +0x1e4:  lea    -0x30(%ebp),%eax
0811a6bb +0x1e7:  mov    %eax,(%esp)
0811a6be +0x1ea:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0811a6c3 +0x1ef:  test   %al,%al
0811a6c5 +0x1f1:  jne    0811a576 <+0xa2>
0811a6cb +0x1f7:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0811a6d0 +0x1fc:  movl   $0x0,0x8(%esp)
0811a6d8 +0x204:  movl   $0x1,0x4(%esp)
0811a6e0 +0x20c:  mov    %eax,(%esp)
0811a6e3 +0x20f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0811a6e8 +0x214:  mov    %eax,-0x20(%ebp)
0811a6eb +0x217:  movb   $0x0,-0x19(%ebp)
0811a6ef +0x21b:  lea    -0x2c(%ebp),%eax
0811a6f2 +0x21e:  mov    %eax,(%esp)
0811a6f5 +0x221:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0811a6fa +0x226:  mov    %eax,0x8(%esp)
0811a6fe +0x22a:  movl   $"inSert into dnf_event_info(event_id, apply_type, event_name, event_explain) values%s",0x4(%esp)
0811a706 +0x232:  mov    -0x20(%ebp),%eax
0811a709 +0x235:  mov    %eax,(%esp)
0811a70c +0x238:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0811a711 +0x23d:  movl   $0x1,0x4(%esp)
0811a719 +0x245:  mov    -0x20(%ebp),%eax
0811a71c +0x248:  mov    %eax,(%esp)
0811a71f +0x24b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0811a724 +0x250:  mov    %al,-0x19(%ebp)
0811a727 +0x253:  movzbl -0x19(%ebp),%eax
0811a72b +0x257:  xor    $0x1,%eax
0811a72e +0x25a:  test   %al,%al
0811a730 +0x25c:  je     0811a761 <+0x28d>
0811a732 +0x25e:  mov    -0x20(%ebp),%eax
0811a735 +0x261:  mov    %eax,(%esp)
0811a738 +0x264:  call   0811b97a <_GLOBAL__I_events+0x1d>  ; global constructors keyed to events+0x1d
0811a73d +0x269:  cmp    $0x426,%eax
0811a742 +0x26e:  sete   %al
0811a745 +0x271:  test   %al,%al
0811a747 +0x273:  je     0811a755 <+0x281>
0811a749 +0x275:  mov    $0x0,%esi
0811a74e +0x27a:  mov    $0x0,%ebx
0811a753 +0x27f:  jmp    0811a783 <+0x2af>
0811a755 +0x281:  mov    $0x0,%esi
0811a75a +0x286:  mov    $0x0,%ebx
0811a75f +0x28b:  jmp    0811a783 <+0x2af>
0811a761 +0x28d:  mov    $0x1,%ebx
0811a766 +0x292:  jmp    0811a783 <+0x2af>
0811a768 +0x294:  mov    %edx,%ebx
0811a76a +0x296:  mov    %eax,%esi
0811a76c +0x298:  lea    -0x2c(%ebp),%eax
0811a76f +0x29b:  mov    %eax,(%esp)
0811a772 +0x29e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0811a777 +0x2a3:  mov    %esi,%eax
0811a779 +0x2a5:  mov    %ebx,%edx
0811a77b +0x2a7:  mov    %eax,(%esp)
0811a77e +0x2aa:  call   08ae3750 <_Unwind_Resume>
0811a783 +0x2af:  lea    -0x2c(%ebp),%eax
0811a786 +0x2b2:  mov    %eax,(%esp)
0811a789 +0x2b5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0811a78e +0x2ba:  test   %ebx,%ebx
0811a790 +0x2bc:  je     0811a797 <+0x2c3>
0811a792 +0x2be:  mov    $0x1,%esi
0811a797 +0x2c3:  mov    %esi,%eax
0811a799 +0x2c5:  lea    -0xc(%ebp),%esp
0811a79c +0x2c8:  add    $0x0,%esp
0811a79f +0x2cb:  pop    %ebx
0811a7a0 +0x2cc:  pop    %esi
0811a7a1 +0x2cd:  pop    %edi
0811a7a2 +0x2ce:  pop    %ebp
0811a7a3 +0x2cf:  ret
```

## 反编译 C

```c
// CEventTable::InsertEventTable @ 0x811a4d4

/* CEventTable::InsertEventTable(std::vector<int, std::allocator<int> >&) */

undefined4 CEventTable::InsertEventTable(vector *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  bool bVar10;
  byte bVar11;
  char local_133;
  char local_132 [254];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_34 [4];
  string local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  MySQL *local_24;
  char local_1d;
  
  bVar11 = 0;
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 != '\x01') {
    pcVar8 = &local_133;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_133 = '\0';
      pcVar8 = local_132;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (!bVar10) {
      *pcVar8 = '\0';
    }
    std::string::string(local_30);
                    /* try { // try from 0811a569 to 0811a723 has its CatchHandler @ 0811a768 */
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar10 = __gnu_cxx::operator!=(local_34,local_2c);
      if (!bVar10) break;
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      uVar4 = RDARScriptStringManager::findString
                        ((RDARScriptStringManager *)g_scriptStringManager_,4,
                         *(char **)(events + *piVar3 * 0x14 + 0x10),(bool *)0x0);
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      uVar5 = *(undefined4 *)(events + *piVar3 * 0x14 + 0xc);
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      uVar1 = *(undefined4 *)(events + *piVar3 * 0x14 + 4);
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_34);
      sprintf(&local_133,"(%d,%d,\'%s\',\'%s\')",*(undefined4 *)(events + *piVar3 * 0x14),uVar1,
              uVar5,uVar4);
      std::string::operator+=(local_30,&local_133);
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_34);
      std::vector<int,std::allocator<int>>::end();
      bVar10 = __gnu_cxx::operator!=(local_34,local_28);
      if (bVar10) {
        std::string::operator+=(local_30,",");
      }
    }
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    local_1d = 0;
    uVar5 = std::string::c_str(local_30);
    MySQL::set_query(local_24,
                     "inSert into dnf_event_info(event_id, apply_type, event_name, event_explain) values%s"
                     ,uVar5);
    local_1d = MySQL::exec(local_24,true);
    if (local_1d == '\x01') {
      bVar10 = true;
    }
    else {
      iVar6 = MySQL::getDBError(local_24);
      if (iVar6 == 0x426) {
        unaff_ESI = 0;
        bVar10 = false;
      }
      else {
        unaff_ESI = 0;
        bVar10 = false;
      }
    }
    std::string::~string(local_30);
    if (!bVar10) {
      return unaff_ESI;
    }
  }
  return 1;
}
```
