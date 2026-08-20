# buyItemLog

`_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg`

`OneADayItemShopEvent::buyItemLog(DeliveryMsg&)`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba5e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba5e8  _ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg
#           OneADayItemShopEvent::buyItemLog(DeliveryMsg&)
# range [0x081ba5e8, 0x081ba801]
081ba5e8 +0x000:  push   %ebp
081ba5e9 +0x001:  mov    %esp,%ebp
081ba5eb +0x003:  push   %esi
081ba5ec +0x004:  push   %ebx
081ba5ed +0x005:  sub    $0xa0,%esp
081ba5f3 +0x00b:  mov    0xc(%ebp),%eax
081ba5f6 +0x00e:  mov    %eax,-0xc(%ebp)
081ba5f9 +0x011:  mov    -0xc(%ebp),%eax
081ba5fc +0x014:  mov    0x10(%eax),%ebx
081ba5ff +0x017:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ba604 +0x01c:  mov    0x8cbc(%eax),%eax
081ba60a +0x022:  mov    %ebx,0x4(%esp)
081ba60e +0x026:  mov    %eax,(%esp)
081ba611 +0x029:  call   08513082 <_ZNK9CItemShop13IsOneADayShopEi>  ; CItemShop::IsOneADayShop(int) const
081ba616 +0x02e:  xor    $0x1,%eax
081ba619 +0x031:  test   %al,%al
081ba61b +0x033:  jne    081ba7f7 <+0x20f>
081ba621 +0x039:  lea    -0x98(%ebp),%eax
081ba627 +0x03f:  mov    %eax,(%esp)
081ba62a +0x042:  call   081ba886 <_GLOBAL__I_correctQuestIds+0x44>  ; global constructors keyed to correctQuestIds+0x44
081ba62f +0x047:  mov    -0xc(%ebp),%eax
081ba632 +0x04a:  mov    0x4(%eax),%eax
081ba635 +0x04d:  mov    %eax,-0x94(%ebp)
081ba63b +0x053:  mov    -0xc(%ebp),%eax
081ba63e +0x056:  mov    0x8(%eax),%eax
081ba641 +0x059:  mov    %eax,-0x90(%ebp)
081ba647 +0x05f:  mov    -0xc(%ebp),%eax
081ba64a +0x062:  mov    0xc(%eax),%eax
081ba64d +0x065:  mov    %eax,-0x8c(%ebp)
081ba653 +0x06b:  movl   $0x6d,-0x98(%ebp)
081ba65d +0x075:  movl   $0x9,-0x88(%ebp)
081ba667 +0x07f:  lea    -0x1c(%ebp),%eax
081ba66a +0x082:  mov    %eax,(%esp)
081ba66d +0x085:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081ba672 +0x08a:  lea    -0x15(%ebp),%eax
081ba675 +0x08d:  mov    %eax,(%esp)
081ba678 +0x090:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081ba67d +0x095:  lea    -0x15(%ebp),%eax
081ba680 +0x098:  mov    %eax,0x8(%esp)
081ba684 +0x09c:  movl   $"/",0x4(%esp)
081ba68c +0x0a4:  lea    -0x20(%ebp),%eax
081ba68f +0x0a7:  mov    %eax,(%esp)
081ba692 +0x0aa:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081ba697 +0x0af:  jmp    081ba6b1 <+0xc9>
081ba699 +0x0b1:  mov    %edx,%ebx
081ba69b +0x0b3:  mov    %eax,%esi
081ba69d +0x0b5:  lea    -0x15(%ebp),%eax
081ba6a0 +0x0b8:  mov    %eax,(%esp)
081ba6a3 +0x0bb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081ba6a8 +0x0c0:  mov    %esi,%eax
081ba6aa +0x0c2:  mov    %ebx,%edx
081ba6ac +0x0c4:  jmp    081ba7cf <+0x1e7>
081ba6b1 +0x0c9:  lea    -0x15(%ebp),%eax
081ba6b4 +0x0cc:  mov    %eax,(%esp)
081ba6b7 +0x0cf:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081ba6bc +0x0d4:  mov    -0xc(%ebp),%eax
081ba6bf +0x0d7:  mov    0x14(%eax),%eax
081ba6c2 +0x0da:  test   %eax,%eax
081ba6c4 +0x0dc:  je     081ba79d <+0x1b5>
081ba6ca +0x0e2:  mov    -0xc(%ebp),%eax
081ba6cd +0x0e5:  mov    0x14(%eax),%eax
081ba6d0 +0x0e8:  lea    0x2(%eax),%edx
081ba6d3 +0x0eb:  lea    -0x10(%ebp),%eax
081ba6d6 +0x0ee:  mov    %edx,0x4(%esp)
081ba6da +0x0f2:  mov    %eax,(%esp)
081ba6dd +0x0f5:  call   081baa92 <_GLOBAL__I_correctQuestIds+0x250>  ; global constructors keyed to correctQuestIds+0x250
081ba6e2 +0x0fa:  sub    $0x4,%esp
081ba6e5 +0x0fd:  lea    -0x14(%ebp),%eax
081ba6e8 +0x100:  lea    -0x20(%ebp),%edx
081ba6eb +0x103:  mov    %edx,0x8(%esp)
081ba6ef +0x107:  lea    -0x10(%ebp),%edx
081ba6f2 +0x10a:  mov    %edx,0x4(%esp)
081ba6f6 +0x10e:  mov    %eax,(%esp)
081ba6f9 +0x111:  call   081baa3a <_GLOBAL__I_correctQuestIds+0x1f8>  ; global constructors keyed to correctQuestIds+0x1f8
081ba6fe +0x116:  sub    $0x4,%esp
081ba701 +0x119:  lea    -0x14(%ebp),%eax
081ba704 +0x11c:  mov    %eax,0x4(%esp)
081ba708 +0x120:  lea    -0x1c(%ebp),%eax
081ba70b +0x123:  mov    %eax,(%esp)
081ba70e +0x126:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
081ba713 +0x12b:  jmp    081ba72a <+0x142>
081ba715 +0x12d:  mov    %edx,%ebx
081ba717 +0x12f:  mov    %eax,%esi
081ba719 +0x131:  lea    -0x14(%ebp),%eax
081ba71c +0x134:  mov    %eax,(%esp)
081ba71f +0x137:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba724 +0x13c:  mov    %esi,%eax
081ba726 +0x13e:  mov    %ebx,%edx
081ba728 +0x140:  jmp    081ba737 <+0x14f>
081ba72a +0x142:  lea    -0x14(%ebp),%eax
081ba72d +0x145:  mov    %eax,(%esp)
081ba730 +0x148:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba735 +0x14d:  jmp    081ba74c <+0x164>
081ba737 +0x14f:  mov    %edx,%ebx
081ba739 +0x151:  mov    %eax,%esi
081ba73b +0x153:  lea    -0x10(%ebp),%eax
081ba73e +0x156:  mov    %eax,(%esp)
081ba741 +0x159:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba746 +0x15e:  mov    %esi,%eax
081ba748 +0x160:  mov    %ebx,%edx
081ba74a +0x162:  jmp    081ba7ad <+0x1c5>
081ba74c +0x164:  lea    -0x10(%ebp),%eax
081ba74f +0x167:  mov    %eax,(%esp)
081ba752 +0x16a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba757 +0x16f:  lea    -0x1c(%ebp),%eax
081ba75a +0x172:  mov    %eax,(%esp)
081ba75d +0x175:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081ba762 +0x17a:  cmp    $0x63,%eax
081ba765 +0x17d:  setbe  %al
081ba768 +0x180:  test   %al,%al
081ba76a +0x182:  je     081ba79d <+0x1b5>
081ba76c +0x184:  lea    -0x1c(%ebp),%eax
081ba76f +0x187:  mov    %eax,(%esp)
081ba772 +0x18a:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081ba777 +0x18f:  mov    %eax,%ebx
081ba779 +0x191:  lea    -0x1c(%ebp),%eax
081ba77c +0x194:  mov    %eax,(%esp)
081ba77f +0x197:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081ba784 +0x19c:  mov    %ebx,0x8(%esp)
081ba788 +0x1a0:  mov    %eax,0x4(%esp)
081ba78c +0x1a4:  lea    -0x98(%ebp),%eax
081ba792 +0x1aa:  add    $0x14,%eax
081ba795 +0x1ad:  mov    %eax,(%esp)
081ba798 +0x1b0:  call   0807d8a0 <_init+0x198>
081ba79d +0x1b5:  lea    -0x98(%ebp),%eax
081ba7a3 +0x1bb:  mov    %eax,(%esp)
081ba7a6 +0x1be:  call   0844920e <_ZN22DB_InsertEventStageLog11makeRequestER19SIG_EVENT_STAGE_LOG>  ; DB_InsertEventStageLog::makeRequest(SIG_EVENT_STAGE_LOG&)
081ba7ab +0x1c3:  jmp    081ba7c2 <+0x1da>
081ba7ad +0x1c5:  mov    %edx,%ebx
081ba7af +0x1c7:  mov    %eax,%esi
081ba7b1 +0x1c9:  lea    -0x20(%ebp),%eax
081ba7b4 +0x1cc:  mov    %eax,(%esp)
081ba7b7 +0x1cf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba7bc +0x1d4:  mov    %esi,%eax
081ba7be +0x1d6:  mov    %ebx,%edx
081ba7c0 +0x1d8:  jmp    081ba7cf <+0x1e7>
081ba7c2 +0x1da:  lea    -0x20(%ebp),%eax
081ba7c5 +0x1dd:  mov    %eax,(%esp)
081ba7c8 +0x1e0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba7cd +0x1e5:  jmp    081ba7ea <+0x202>
081ba7cf +0x1e7:  mov    %edx,%ebx
081ba7d1 +0x1e9:  mov    %eax,%esi
081ba7d3 +0x1eb:  lea    -0x1c(%ebp),%eax
081ba7d6 +0x1ee:  mov    %eax,(%esp)
081ba7d9 +0x1f1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba7de +0x1f6:  mov    %esi,%eax
081ba7e0 +0x1f8:  mov    %ebx,%edx
081ba7e2 +0x1fa:  mov    %eax,(%esp)
081ba7e5 +0x1fd:  call   08ae3750 <_Unwind_Resume>
081ba7ea +0x202:  lea    -0x1c(%ebp),%eax
081ba7ed +0x205:  mov    %eax,(%esp)
081ba7f0 +0x208:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081ba7f5 +0x20d:  jmp    081ba7f8 <+0x210>
081ba7f7 +0x20f:  nop
081ba7f8 +0x210:  lea    -0x8(%ebp),%esp
081ba7fb +0x213:  add    $0x0,%esp
081ba7fe +0x216:  pop    %ebx
081ba7ff +0x217:  pop    %esi
081ba800 +0x218:  pop    %ebp
081ba801 +0x219:  ret
```

## 反编译 C

```c
// OneADayItemShopEvent::buyItemLog @ 0x81ba5e8

/* OneADayItemShopEvent::buyItemLog(DeliveryMsg&) */

void __thiscall OneADayItemShopEvent::buyItemLog(OneADayItemShopEvent *this,DeliveryMsg *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  void *__src;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [100];
  string local_24;
  string local_20 [7];
  allocator<char> local_19;
  string local_18;
  string local_14;
  DeliveryMsg *local_10;
  
  local_10 = param_1;
  iVar2 = G_CDataManager();
  cVar1 = CItemShop::IsOneADayShop(*(int *)(iVar2 + 0x8cbc));
  if (cVar1 == '\x01') {
    SIG_EVENT_STAGE_LOG::SIG_EVENT_STAGE_LOG((SIG_EVENT_STAGE_LOG *)&local_9c);
    local_98 = *(undefined4 *)(local_10 + 4);
    local_94 = *(undefined4 *)(local_10 + 8);
    local_90 = *(undefined4 *)(local_10 + 0xc);
    local_9c = 0x6d;
    local_8c = 9;
    std::string::string(local_20);
    std::allocator<char>::allocator();
                    /* try { // try from 081ba692 to 081ba696 has its CatchHandler @ 081ba699 */
    std::string::string((string *)&local_24,"/",(allocator *)&local_19);
    std::allocator<char>::~allocator(&local_19);
    if (*(int *)(local_10 + 0x14) != 0) {
                    /* try { // try from 081ba6dd to 081ba6e1 has its CatchHandler @ 081ba7ad */
      boost::lexical_cast<std::string,unsigned_long>
                (&local_14,(ulong *)(*(int *)(local_10 + 0x14) + 2));
                    /* try { // try from 081ba6f9 to 081ba6fd has its CatchHandler @ 081ba737 */
      std::operator+(&local_18,&local_14,&local_24);
                    /* try { // try from 081ba70e to 081ba712 has its CatchHandler @ 081ba715 */
      std::string::operator=(local_20,(string *)&local_18);
                    /* try { // try from 081ba730 to 081ba734 has its CatchHandler @ 081ba737 */
      std::string::~string((string *)&local_18);
                    /* try { // try from 081ba752 to 081ba7aa has its CatchHandler @ 081ba7ad */
      std::string::~string((string *)&local_14);
      uVar3 = std::string::size(local_20);
      if (uVar3 < 100) {
        __n = std::string::size(local_20);
        __src = (void *)std::string::c_str(local_20);
        memcpy(auStack_88,__src,__n);
      }
    }
    DB_InsertEventStageLog::makeRequest((SIG_EVENT_STAGE_LOG *)&local_9c);
                    /* try { // try from 081ba7c8 to 081ba7cc has its CatchHandler @ 081ba7cf */
    std::string::~string((string *)&local_24);
    std::string::~string(local_20);
  }
  return;
}
```
