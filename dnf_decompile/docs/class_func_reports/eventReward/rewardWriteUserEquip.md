# rewardWriteUserEquip

`_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi`

`eventReward::rewardWriteUserEquip(Inven_Item*, rewardKey, int)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f06da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f06da  _ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi
#           eventReward::rewardWriteUserEquip(Inven_Item*, rewardKey, int)
# range [0x080f06da, 0x080f0975]
080f06da +0x000:  push   %ebp
080f06db +0x001:  mov    %esp,%ebp
080f06dd +0x003:  push   %ebx
080f06de +0x004:  sub    $0x84,%esp
080f06e4 +0x00a:  mov    0x8(%ebp),%eax
080f06e7 +0x00d:  mov    %eax,(%esp)
080f06ea +0x010:  call   080f19b2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa34>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa34
080f06ef +0x015:  test   %al,%al
080f06f1 +0x017:  je     080f06fd <+0x23>
080f06f3 +0x019:  mov    $0x0,%eax
080f06f8 +0x01e:  jmp    080f0970 <+0x296>
080f06fd +0x023:  mov    0x8(%ebp),%edx
080f0700 +0x026:  lea    -0x2c(%ebp),%eax
080f0703 +0x029:  lea    0x10(%ebp),%ecx
080f0706 +0x02c:  mov    %ecx,0x8(%esp)
080f070a +0x030:  mov    %edx,0x4(%esp)
080f070e +0x034:  mov    %eax,(%esp)
080f0711 +0x037:  call   080f19c6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa48>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa48
080f0716 +0x03c:  sub    $0x4,%esp
080f0719 +0x03f:  mov    0x8(%ebp),%edx
080f071c +0x042:  lea    -0x28(%ebp),%eax
080f071f +0x045:  mov    %edx,0x4(%esp)
080f0723 +0x049:  mov    %eax,(%esp)
080f0726 +0x04c:  call   080f19f2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa74>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa74
080f072b +0x051:  sub    $0x4,%esp
080f072e +0x054:  lea    -0x28(%ebp),%eax
080f0731 +0x057:  mov    %eax,0x4(%esp)
080f0735 +0x05b:  lea    -0x2c(%ebp),%eax
080f0738 +0x05e:  mov    %eax,(%esp)
080f073b +0x061:  call   080f1a18 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa9a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa9a
080f0740 +0x066:  test   %al,%al
080f0742 +0x068:  je     080f074e <+0x74>
080f0744 +0x06a:  mov    $0x0,%eax
080f0749 +0x06f:  jmp    080f0970 <+0x296>
080f074e +0x074:  lea    -0x2c(%ebp),%eax
080f0751 +0x077:  mov    %eax,(%esp)
080f0754 +0x07a:  call   080f1a2c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xaae>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xaae
080f0759 +0x07f:  add    $0x8,%eax
080f075c +0x082:  mov    %eax,-0x18(%ebp)
080f075f +0x085:  lea    -0x30(%ebp),%eax
080f0762 +0x088:  lea    0x18(%ebp),%edx
080f0765 +0x08b:  mov    %edx,0x8(%esp)
080f0769 +0x08f:  mov    -0x18(%ebp),%edx
080f076c +0x092:  mov    %edx,0x4(%esp)
080f0770 +0x096:  mov    %eax,(%esp)
080f0773 +0x099:  call   080f16b6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x738>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x738
080f0778 +0x09e:  sub    $0x4,%esp
080f077b +0x0a1:  lea    -0x24(%ebp),%eax
080f077e +0x0a4:  mov    -0x18(%ebp),%edx
080f0781 +0x0a7:  mov    %edx,0x4(%esp)
080f0785 +0x0ab:  mov    %eax,(%esp)
080f0788 +0x0ae:  call   080f16e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x764>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x764
080f078d +0x0b3:  sub    $0x4,%esp
080f0790 +0x0b6:  lea    -0x24(%ebp),%eax
080f0793 +0x0b9:  mov    %eax,0x4(%esp)
080f0797 +0x0bd:  lea    -0x30(%ebp),%eax
080f079a +0x0c0:  mov    %eax,(%esp)
080f079d +0x0c3:  call   080f1a3a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xabc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xabc
080f07a2 +0x0c8:  test   %al,%al
080f07a4 +0x0ca:  je     080f07b0 <+0xd6>
080f07a6 +0x0cc:  mov    $0x0,%eax
080f07ab +0x0d1:  jmp    080f0970 <+0x296>
080f07b0 +0x0d6:  lea    -0x30(%ebp),%eax
080f07b3 +0x0d9:  mov    %eax,(%esp)
080f07b6 +0x0dc:  call   080f171c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x79e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x79e
080f07bb +0x0e1:  add    $0x4,%eax
080f07be +0x0e4:  mov    %eax,-0x14(%ebp)
080f07c1 +0x0e7:  mov    -0x14(%ebp),%eax
080f07c4 +0x0ea:  mov    %eax,(%esp)
080f07c7 +0x0ed:  call   080f1a4e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xad0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xad0
080f07cc +0x0f2:  test   %al,%al
080f07ce +0x0f4:  je     080f07da <+0x100>
080f07d0 +0x0f6:  mov    $0x0,%eax
080f07d5 +0x0fb:  jmp    080f0970 <+0x296>
080f07da +0x100:  lea    -0x34(%ebp),%eax
080f07dd +0x103:  mov    -0x14(%ebp),%edx
080f07e0 +0x106:  mov    %edx,0x4(%esp)
080f07e4 +0x10a:  mov    %eax,(%esp)
080f07e7 +0x10d:  call   080f1a92 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb14>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb14
080f07ec +0x112:  sub    $0x4,%esp
080f07ef +0x115:  jmp    080f093c <+0x262>
080f07f4 +0x11a:  lea    -0x34(%ebp),%eax
080f07f7 +0x11d:  mov    %eax,(%esp)
080f07fa +0x120:  call   080f1b3c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbbe>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbbe
080f07ff +0x125:  mov    0x4(%eax),%ebx
080f0802 +0x128:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f0807 +0x12d:  mov    %ebx,0x4(%esp)
080f080b +0x131:  mov    %eax,(%esp)
080f080e +0x134:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080f0813 +0x139:  mov    %eax,-0x10(%ebp)
080f0816 +0x13c:  cmpl   $0x0,-0x10(%ebp)
080f081a +0x140:  jne    080f0826 <+0x14c>
080f081c +0x142:  mov    $0x0,%eax
080f0821 +0x147:  jmp    080f0970 <+0x296>
080f0826 +0x14c:  lea    -0x71(%ebp),%eax
080f0829 +0x14f:  mov    %eax,(%esp)
080f082c +0x152:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080f0831 +0x157:  lea    -0x34(%ebp),%eax
080f0834 +0x15a:  mov    %eax,(%esp)
080f0837 +0x15d:  call   080f1b3c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbbe>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbbe
080f083c +0x162:  mov    0x4(%eax),%eax
080f083f +0x165:  mov    %eax,-0x6f(%ebp)
080f0842 +0x168:  mov    -0x10(%ebp),%eax
080f0845 +0x16b:  mov    (%eax),%eax
080f0847 +0x16d:  add    $0x8,%eax
080f084a +0x170:  mov    (%eax),%edx
080f084c +0x172:  lea    -0x71(%ebp),%eax
080f084f +0x175:  mov    %eax,0x4(%esp)
080f0853 +0x179:  mov    -0x10(%ebp),%eax
080f0856 +0x17c:  mov    %eax,(%esp)
080f0859 +0x17f:  call   *%edx
080f085b +0x181:  lea    -0x34(%ebp),%eax
080f085e +0x184:  mov    %eax,(%esp)
080f0861 +0x187:  call   080f1b46 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbc8>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbc8
080f0866 +0x18c:  mov    %eax,0xc(%esp)
080f086a +0x190:  mov    -0x10(%ebp),%eax
080f086d +0x193:  mov    %eax,0x8(%esp)
080f0871 +0x197:  lea    -0x71(%ebp),%eax
080f0874 +0x19a:  mov    %eax,0x4(%esp)
080f0878 +0x19e:  mov    0x8(%ebp),%eax
080f087b +0x1a1:  mov    %eax,(%esp)
080f087e +0x1a4:  call   080f0d6e <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData>  ; eventReward::applyItemOption(Inven_Item&, CItem const*, itemData const&)
080f0883 +0x1a9:  mov    -0x10(%ebp),%eax
080f0886 +0x1ac:  mov    %eax,(%esp)
080f0889 +0x1af:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
080f088e +0x1b4:  test   %al,%al
080f0890 +0x1b6:  je     080f089c <+0x1c2>
080f0892 +0x1b8:  mov    $0x0,%eax
080f0897 +0x1bd:  jmp    080f0970 <+0x296>
080f089c +0x1c2:  mov    -0x10(%ebp),%eax
080f089f +0x1c5:  mov    (%eax),%eax
080f08a1 +0x1c7:  add    $0xc,%eax
080f08a4 +0x1ca:  mov    (%eax),%edx
080f08a6 +0x1cc:  mov    -0x10(%ebp),%eax
080f08a9 +0x1cf:  mov    %eax,(%esp)
080f08ac +0x1d2:  call   *%edx
080f08ae +0x1d4:  mov    %eax,-0xc(%ebp)
080f08b1 +0x1d7:  mov    -0xc(%ebp),%eax
080f08b4 +0x1da:  imul   $0x3d,%eax,%eax
080f08b7 +0x1dd:  sub    $0x262,%eax
080f08bc +0x1e2:  add    0xc(%ebp),%eax
080f08bf +0x1e5:  mov    -0x71(%ebp),%edx
080f08c2 +0x1e8:  mov    %edx,(%eax)
080f08c4 +0x1ea:  mov    -0x6d(%ebp),%edx
080f08c7 +0x1ed:  mov    %edx,0x4(%eax)
080f08ca +0x1f0:  mov    -0x69(%ebp),%edx
080f08cd +0x1f3:  mov    %edx,0x8(%eax)
080f08d0 +0x1f6:  mov    -0x65(%ebp),%edx
080f08d3 +0x1f9:  mov    %edx,0xc(%eax)
080f08d6 +0x1fc:  mov    -0x61(%ebp),%edx
080f08d9 +0x1ff:  mov    %edx,0x10(%eax)
080f08dc +0x202:  mov    -0x5d(%ebp),%edx
080f08df +0x205:  mov    %edx,0x14(%eax)
080f08e2 +0x208:  mov    -0x59(%ebp),%edx
080f08e5 +0x20b:  mov    %edx,0x18(%eax)
080f08e8 +0x20e:  mov    -0x55(%ebp),%edx
080f08eb +0x211:  mov    %edx,0x1c(%eax)
080f08ee +0x214:  mov    -0x51(%ebp),%edx
080f08f1 +0x217:  mov    %edx,0x20(%eax)
080f08f4 +0x21a:  mov    -0x4d(%ebp),%edx
080f08f7 +0x21d:  mov    %edx,0x24(%eax)
080f08fa +0x220:  mov    -0x49(%ebp),%edx
080f08fd +0x223:  mov    %edx,0x28(%eax)
080f0900 +0x226:  mov    -0x45(%ebp),%edx
080f0903 +0x229:  mov    %edx,0x2c(%eax)
080f0906 +0x22c:  mov    -0x41(%ebp),%edx
080f0909 +0x22f:  mov    %edx,0x30(%eax)
080f090c +0x232:  mov    -0x3d(%ebp),%edx
080f090f +0x235:  mov    %edx,0x34(%eax)
080f0912 +0x238:  mov    -0x39(%ebp),%edx
080f0915 +0x23b:  mov    %edx,0x38(%eax)
080f0918 +0x23e:  movzbl -0x35(%ebp),%edx
080f091c +0x242:  mov    %dl,0x3c(%eax)
080f091f +0x245:  lea    -0x1c(%ebp),%eax
080f0922 +0x248:  movl   $0x0,0x8(%esp)
080f092a +0x250:  lea    -0x34(%ebp),%edx
080f092d +0x253:  mov    %edx,0x4(%esp)
080f0931 +0x257:  mov    %eax,(%esp)
080f0934 +0x25a:  call   080f1b08 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb8a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb8a
080f0939 +0x25f:  sub    $0x4,%esp
080f093c +0x262:  lea    -0x20(%ebp),%eax
080f093f +0x265:  mov    -0x14(%ebp),%edx
080f0942 +0x268:  mov    %edx,0x4(%esp)
080f0946 +0x26c:  mov    %eax,(%esp)
080f0949 +0x26f:  call   080f1ab6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb38>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb38
080f094e +0x274:  sub    $0x4,%esp
080f0951 +0x277:  lea    -0x20(%ebp),%eax
080f0954 +0x27a:  mov    %eax,0x4(%esp)
080f0958 +0x27e:  lea    -0x34(%ebp),%eax
080f095b +0x281:  mov    %eax,(%esp)
080f095e +0x284:  call   080f1adc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb5e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb5e
080f0963 +0x289:  test   %al,%al
080f0965 +0x28b:  jne    080f07f4 <+0x11a>
080f096b +0x291:  mov    $0x1,%eax
080f0970 +0x296:  mov    -0x4(%ebp),%ebx
080f0973 +0x299:  leave
080f0974 +0x29a:  ret
080f0975 +0x29b:  nop
```

## 反编译 C

```c
// eventReward::rewardWriteUserEquip @ 0x80f06da

/* eventReward::rewardWriteUserEquip(Inven_Item*, rewardKey, int) */

undefined4
eventReward::rewardWriteUserEquip
          (map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
           *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this;
  itemData *piVar5;
  undefined4 *puVar6;
  undefined2 local_75;
  undefined2 uStack_73;
  undefined2 uStack_71;
  undefined2 uStack_6f;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined1 local_39;
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_34 [4];
  rewardKey local_30 [4];
  map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
  local_2c [4];
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_20 [4];
  int local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  cVar1 = std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::empty(param_1);
  if (cVar1 == '\0') {
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::find(local_30);
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                          *)local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') {
      local_1c = std::
                 _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                               *)local_30);
      local_1c = local_1c + 8;
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::find((int *)local_34);
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
              ::operator==(local_34,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        local_18 = std::
                   _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                   ::operator->(local_34);
        local_18 = local_18 + 4;
        cVar1 = std::vector<itemData,std::allocator<itemData>>::empty();
        if (cVar1 == '\0') {
          std::vector<itemData,std::allocator<itemData>>::begin();
          while( true ) {
            std::vector<itemData,std::allocator<itemData>>::end();
            bVar2 = __gnu_cxx::operator!=(local_38,local_24);
            if (!bVar2) break;
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            iVar4 = *(int *)(iVar4 + 4);
            this = (CDataManager *)G_CDataManager();
            local_14 = (CItem *)CDataManager::find_item(this,iVar4);
            if (local_14 == (CItem *)0x0) {
              return 0;
            }
            Inven_Item::Inven_Item((Inven_Item *)&local_75);
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            uStack_73 = (undefined2)*(undefined4 *)(iVar4 + 4);
            uStack_71 = (undefined2)((uint)*(undefined4 *)(iVar4 + 4) >> 0x10);
            (**(code **)(*(int *)local_14 + 8))(local_14,&local_75);
            piVar5 = (itemData *)
                     __gnu_cxx::
                     __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                     operator*(local_38);
            applyItemOption((eventReward *)param_1,(Inven_Item *)&local_75,local_14,piVar5);
            cVar1 = CItem::is_stackable(local_14);
            if (cVar1 != '\0') {
              return 0;
            }
            local_10 = (**(code **)(*(int *)local_14 + 0xc))(local_14);
            puVar6 = (undefined4 *)(local_10 * 0x3d + -0x262 + param_2);
            *puVar6 = CONCAT22(uStack_73,local_75);
            puVar6[1] = CONCAT22(uStack_6f,uStack_71);
            puVar6[2] = local_6d;
            puVar6[3] = local_69;
            puVar6[4] = local_65;
            puVar6[5] = local_61;
            puVar6[6] = local_5d;
            puVar6[7] = local_59;
            puVar6[8] = local_55;
            puVar6[9] = local_51;
            puVar6[10] = local_4d;
            puVar6[0xb] = local_49;
            puVar6[0xc] = local_45;
            puVar6[0xd] = local_41;
            puVar6[0xe] = local_3d;
            *(undefined1 *)(puVar6 + 0xf) = local_39;
            __gnu_cxx::__normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
            operator++(local_20,(int)local_38);
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
