# InsertPacketLog

`_ZN18CPowerWarPacketLog15InsertPacketLogEit9eSendTypePKc`

`CPowerWarPacketLog::InsertPacketLog(int, unsigned short, eSendType, char const*)`

| 类 | 地址 |
|---|---|
| `CPowerWarPacketLog` | `0x08480970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480970  _ZN18CPowerWarPacketLog15InsertPacketLogEit9eSendTypePKc
#           CPowerWarPacketLog::InsertPacketLog(int, unsigned short, eSendType, char const*)
# range [0x08480970, 0x08480abf]
08480970 +0x000:  push   %ebp
08480971 +0x001:  mov    %esp,%ebp
08480973 +0x003:  push   %edi
08480974 +0x004:  push   %esi
08480975 +0x005:  push   %ebx
08480976 +0x006:  sub    $0x5c,%esp
08480979 +0x009:  mov    0x10(%ebp),%eax
0848097c +0x00c:  mov    %ax,-0x4c(%ebp)
08480980 +0x010:  movzwl -0x4c(%ebp),%eax
08480984 +0x014:  movzwl %ax,%eax
08480987 +0x017:  mov    %eax,-0x3c(%ebp)
0848098a +0x01a:  mov    0x8(%ebp),%edx
0848098d +0x01d:  lea    -0x40(%ebp),%eax
08480990 +0x020:  lea    -0x3c(%ebp),%ecx
08480993 +0x023:  mov    %ecx,0x8(%esp)
08480997 +0x027:  mov    %edx,0x4(%esp)
0848099b +0x02b:  mov    %eax,(%esp)
0848099e +0x02e:  call   08481230 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x2ae>  ; global constructors keyed to CPowerManager::CPowerManager()+0x2ae
084809a3 +0x033:  sub    $0x4,%esp
084809a6 +0x036:  mov    0x8(%ebp),%edx
084809a9 +0x039:  lea    -0x38(%ebp),%eax
084809ac +0x03c:  mov    %edx,0x4(%esp)
084809b0 +0x040:  mov    %eax,(%esp)
084809b3 +0x043:  call   084811b6 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x234>  ; global constructors keyed to CPowerManager::CPowerManager()+0x234
084809b8 +0x048:  sub    $0x4,%esp
084809bb +0x04b:  lea    -0x38(%ebp),%eax
084809be +0x04e:  mov    %eax,0x4(%esp)
084809c2 +0x052:  lea    -0x40(%ebp),%eax
084809c5 +0x055:  mov    %eax,(%esp)
084809c8 +0x058:  call   084811dc <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x25a>  ; global constructors keyed to CPowerManager::CPowerManager()+0x25a
084809cd +0x05d:  test   %al,%al
084809cf +0x05f:  je     084809f6 <+0x86>
084809d1 +0x061:  lea    -0x40(%ebp),%eax
084809d4 +0x064:  mov    %eax,(%esp)
084809d7 +0x067:  call   084811f0 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x26e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x26e
084809dc +0x06c:  mov    0x4(%eax),%eax
084809df +0x06f:  mov    %eax,-0x1c(%ebp)
084809e2 +0x072:  mov    -0x1c(%ebp),%eax
084809e5 +0x075:  mov    0xc(%eax),%eax
084809e8 +0x078:  lea    0x1(%eax),%edx
084809eb +0x07b:  mov    -0x1c(%ebp),%eax
084809ee +0x07e:  mov    %edx,0xc(%eax)
084809f1 +0x081:  jmp    08480ab4 <+0x144>
084809f6 +0x086:  movl   $0x14,(%esp)
084809fd +0x08d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08480a02 +0x092:  mov    %eax,%ebx
08480a04 +0x094:  mov    %ebx,%eax
08480a06 +0x096:  mov    %eax,(%esp)
08480a09 +0x099:  call   08481100 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x17e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x17e
08480a0e +0x09e:  jmp    08480a28 <+0xb8>
08480a10 +0x0a0:  mov    %edx,%esi
08480a12 +0x0a2:  mov    %eax,%edi
08480a14 +0x0a4:  mov    %ebx,(%esp)
08480a17 +0x0a7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08480a1c +0x0ac:  mov    %edi,%eax
08480a1e +0x0ae:  mov    %esi,%edx
08480a20 +0x0b0:  mov    %eax,(%esp)
08480a23 +0x0b3:  call   08ae3750 <_Unwind_Resume>
08480a28 +0x0b8:  mov    %ebx,%eax
08480a2a +0x0ba:  mov    %eax,-0x44(%ebp)
08480a2d +0x0bd:  mov    -0x44(%ebp),%eax
08480a30 +0x0c0:  movl   $0x1,0xc(%eax)
08480a37 +0x0c7:  mov    -0x44(%ebp),%eax
08480a3a +0x0ca:  movzwl -0x4c(%ebp),%edx
08480a3e +0x0ce:  movzwl %dx,%edx
08480a41 +0x0d1:  mov    %edx,0x8(%eax)
08480a44 +0x0d4:  mov    -0x44(%ebp),%eax
08480a47 +0x0d7:  mov    0x14(%ebp),%edx
08480a4a +0x0da:  mov    %edx,(%eax)
08480a4c +0x0dc:  mov    -0x44(%ebp),%eax
08480a4f +0x0df:  mov    0xc(%ebp),%edx
08480a52 +0x0e2:  mov    %edx,0x4(%eax)
08480a55 +0x0e5:  mov    -0x44(%ebp),%eax
08480a58 +0x0e8:  lea    0x10(%eax),%edx
08480a5b +0x0eb:  mov    0x18(%ebp),%eax
08480a5e +0x0ee:  mov    %eax,0x4(%esp)
08480a62 +0x0f2:  mov    %edx,(%esp)
08480a65 +0x0f5:  call   08708690 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x22a0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x22a0
08480a6a +0x0fa:  lea    -0x24(%ebp),%eax
08480a6d +0x0fd:  lea    -0x44(%ebp),%edx
08480a70 +0x100:  mov    %edx,0x8(%esp)
08480a74 +0x104:  lea    -0x4c(%ebp),%edx
08480a77 +0x107:  mov    %edx,0x4(%esp)
08480a7b +0x10b:  mov    %eax,(%esp)
08480a7e +0x10e:  call   0848125c <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x2da>  ; global constructors keyed to CPowerManager::CPowerManager()+0x2da
08480a83 +0x113:  sub    $0x4,%esp
08480a86 +0x116:  lea    -0x24(%ebp),%eax
08480a89 +0x119:  mov    %eax,0x4(%esp)
08480a8d +0x11d:  lea    -0x2c(%ebp),%eax
08480a90 +0x120:  mov    %eax,(%esp)
08480a93 +0x123:  call   0848129a <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x318>  ; global constructors keyed to CPowerManager::CPowerManager()+0x318
08480a98 +0x128:  mov    0x8(%ebp),%edx
08480a9b +0x12b:  lea    -0x34(%ebp),%eax
08480a9e +0x12e:  lea    -0x2c(%ebp),%ecx
08480aa1 +0x131:  mov    %ecx,0x8(%esp)
08480aa5 +0x135:  mov    %edx,0x4(%esp)
08480aa9 +0x139:  mov    %eax,(%esp)
08480aac +0x13c:  call   084812ce <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x34c>  ; global constructors keyed to CPowerManager::CPowerManager()+0x34c
08480ab1 +0x141:  sub    $0x4,%esp
08480ab4 +0x144:  lea    -0xc(%ebp),%esp
08480ab7 +0x147:  add    $0x0,%esp
08480aba +0x14a:  pop    %ebx
08480abb +0x14b:  pop    %esi
08480abc +0x14c:  pop    %edi
08480abd +0x14d:  pop    %ebp
08480abe +0x14e:  ret
08480abf +0x14f:  nop
```

## 反编译 C

```c
// CPowerWarPacketLog::InsertPacketLog @ 0x8480970

/* CPowerWarPacketLog::InsertPacketLog(int, unsigned short, eSendType, char const*) */

void __thiscall
CPowerWarPacketLog::InsertPacketLog
          (undefined4 this,undefined4 param_1,ushort param_2,undefined4 param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  STPacketLog *this_00;
  ushort local_50 [4];
  STPacketLog *local_48;
  _Rb_tree_iterator<std::pair<int_const,STPacketLog*>> local_44 [4];
  uint local_40;
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_3c [4];
  pair local_38 [8];
  pair<int_const,STPacketLog*> local_30 [8];
  ushort local_28 [12];
  
  local_50[0] = param_2;
  local_40 = (uint)param_2;
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::find
            ((int *)local_44);
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::end
            (local_3c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator!=
                    (local_44,(_Rb_tree_iterator *)local_3c);
  if (cVar1 == '\0') {
    this_00 = operator_new(0x14);
                    /* try { // try from 08480a09 to 08480a0d has its CatchHandler @ 08480a10 */
    STPacketLog::STPacketLog(this_00);
    *(undefined4 *)(this_00 + 0xc) = 1;
    *(uint *)(this_00 + 8) = (uint)local_50[0];
    *(undefined4 *)this_00 = param_4;
    *(undefined4 *)(this_00 + 4) = param_1;
    local_48 = this_00;
    std::string::assign((string *)(this_00 + 0x10),param_5);
    std::make_pair<unsigned_short&,STPacketLog*&>(local_28,(STPacketLog **)local_50);
    std::pair<int_const,STPacketLog*>::pair<unsigned_short,STPacketLog*>(local_30,(pair *)local_28);
    std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::
    insert(local_38);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator->(local_44);
    *(int *)(*(int *)(iVar2 + 4) + 0xc) = *(int *)(*(int *)(iVar2 + 4) + 0xc) + 1;
  }
  return;
}
```
