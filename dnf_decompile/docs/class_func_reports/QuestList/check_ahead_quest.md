# check_ahead_quest

`_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE`

`QuestList::check_ahead_quest(int, WongWork::CQuestClear const&)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08354fc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08354fc8  _ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE
#           QuestList::check_ahead_quest(int, WongWork::CQuestClear const&)
# range [0x08354fc8, 0x0835511d]
08354fc8 +0x000:  push   %ebp
08354fc9 +0x001:  mov    %esp,%ebp
08354fcb +0x003:  sub    $0x48,%esp
08354fce +0x006:  mov    0xc(%ebp),%eax
08354fd1 +0x009:  mov    %eax,0x4(%esp)
08354fd5 +0x00d:  mov    0x8(%ebp),%eax
08354fd8 +0x010:  mov    %eax,(%esp)
08354fdb +0x013:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
08354fe0 +0x018:  mov    %eax,-0x24(%ebp)
08354fe3 +0x01b:  cmpl   $0x0,-0x24(%ebp)
08354fe7 +0x01f:  jne    08355026 <+0x5e>
08354fe9 +0x021:  mov    0xc(%ebp),%eax
08354fec +0x024:  mov    %eax,0x14(%esp)
08354ff0 +0x028:  movl   $"find_quest(%d)",0x10(%esp)
08354ff8 +0x030:  movl   $0x14b7,0xc(%esp)
08355000 +0x038:  movl   $&_ZZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearEE19__PRETTY_FUNCTION__,0x8(%esp)
08355008 +0x040:  movl   $"data_manager.cpp",0x4(%esp)
08355010 +0x048:  movl   $0x1,(%esp)
08355017 +0x04f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0835501c +0x054:  mov    $0x0,%eax
08355021 +0x059:  jmp    0835511c <+0x154>
08355026 +0x05e:  mov    -0x24(%ebp),%eax
08355029 +0x061:  add    $0x2c,%eax
0835502c +0x064:  mov    %eax,(%esp)
0835502f +0x067:  call   08391c0a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x216aa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x216aa
08355034 +0x06c:  test   %al,%al
08355036 +0x06e:  je     08355042 <+0x7a>
08355038 +0x070:  mov    $0x1,%eax
0835503d +0x075:  jmp    0835511c <+0x154>
08355042 +0x07a:  lea    -0x28(%ebp),%eax
08355045 +0x07d:  mov    %eax,(%esp)
08355048 +0x080:  call   0817f232 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x463>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x463
0835504d +0x085:  mov    -0x24(%ebp),%eax
08355050 +0x088:  add    $0x2c,%eax
08355053 +0x08b:  mov    %eax,(%esp)
08355056 +0x08e:  call   08391c4e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x216ee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x216ee
0835505b +0x093:  mov    %eax,-0x1c(%ebp)
0835505e +0x096:  movl   $0x0,-0x18(%ebp)
08355065 +0x09d:  jmp    08355106 <+0x13e>
0835506a +0x0a2:  mov    -0x24(%ebp),%eax
0835506d +0x0a5:  lea    0x2c(%eax),%edx
08355070 +0x0a8:  mov    -0x18(%ebp),%eax
08355073 +0x0ab:  mov    %eax,0x4(%esp)
08355077 +0x0af:  mov    %edx,(%esp)
0835507a +0x0b2:  call   08391c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21710
0835507f +0x0b7:  mov    %eax,(%esp)
08355082 +0x0ba:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08355087 +0x0bf:  mov    %eax,-0x14(%ebp)
0835508a +0x0c2:  movb   $0x0,-0xd(%ebp)
0835508e +0x0c6:  movl   $0x0,-0xc(%ebp)
08355095 +0x0cd:  jmp    083550e3 <+0x11b>
08355097 +0x0cf:  mov    -0x24(%ebp),%eax
0835509a +0x0d2:  lea    0x2c(%eax),%edx
0835509d +0x0d5:  mov    -0x18(%ebp),%eax
083550a0 +0x0d8:  mov    %eax,0x4(%esp)
083550a4 +0x0dc:  mov    %edx,(%esp)
083550a7 +0x0df:  call   08391c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21710
083550ac +0x0e4:  mov    -0xc(%ebp),%edx
083550af +0x0e7:  mov    %edx,0x4(%esp)
083550b3 +0x0eb:  mov    %eax,(%esp)
083550b6 +0x0ee:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
083550bb +0x0f3:  mov    (%eax),%eax
083550bd +0x0f5:  mov    %eax,-0x20(%ebp)
083550c0 +0x0f8:  mov    -0x20(%ebp),%eax
083550c3 +0x0fb:  mov    %eax,0x4(%esp)
083550c7 +0x0ff:  mov    0x10(%ebp),%eax
083550ca +0x102:  mov    %eax,(%esp)
083550cd +0x105:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
083550d2 +0x10a:  xor    $0x1,%eax
083550d5 +0x10d:  test   %al,%al
083550d7 +0x10f:  je     083550df <+0x117>
083550d9 +0x111:  movb   $0x1,-0xd(%ebp)
083550dd +0x115:  jmp    083550f0 <+0x128>
083550df +0x117:  addl   $0x1,-0xc(%ebp)
083550e3 +0x11b:  mov    -0xc(%ebp),%eax
083550e6 +0x11e:  cmp    -0x14(%ebp),%eax
083550e9 +0x121:  setb   %al
083550ec +0x124:  test   %al,%al
083550ee +0x126:  jne    08355097 <+0xcf>
083550f0 +0x128:  movzbl -0xd(%ebp),%eax
083550f4 +0x12c:  xor    $0x1,%eax
083550f7 +0x12f:  test   %al,%al
083550f9 +0x131:  je     08355102 <+0x13a>
083550fb +0x133:  mov    $0x1,%eax
08355100 +0x138:  jmp    0835511c <+0x154>
08355102 +0x13a:  addl   $0x1,-0x18(%ebp)
08355106 +0x13e:  mov    -0x18(%ebp),%eax
08355109 +0x141:  cmp    -0x1c(%ebp),%eax
0835510c +0x144:  setb   %al
0835510f +0x147:  test   %al,%al
08355111 +0x149:  jne    0835506a <+0xa2>
08355117 +0x14f:  mov    $0x0,%eax
0835511c +0x154:  leave
0835511d +0x155:  ret
```

## 反编译 C

```c
// QuestList::check_ahead_quest @ 0x8354fc8

/* QuestList::check_ahead_quest(int, WongWork::CQuestClear const&) */

undefined4 __thiscall QuestList::check_ahead_quest(QuestList *this,int param_1,CQuestClear *param_2)

{
  char cVar1;
  undefined4 uVar2;
  vector<int,std::allocator<int>> *pvVar3;
  uint *puVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_2c [4];
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  uint local_10;
  
  local_28 = find_quest((int)this);
  if (local_28 == 0) {
    LogManager::logFormat
              (1,"data_manager.cpp",
               "bool QuestList::check_ahead_quest(int, const WongWork::CQuestClear&)",0x14b7,
               "find_quest(%d)",param_1);
    uVar2 = 0;
  }
  else {
    cVar1 = std::
            vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            ::empty();
    if (cVar1 == '\0') {
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
                (local_2c);
      local_20 = std::
                 vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 ::size((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                         *)(local_28 + 0x2c));
      for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
        pvVar3 = (vector<int,std::allocator<int>> *)
                 std::
                 vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 ::operator[]((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                               *)(local_28 + 0x2c),local_1c);
        local_18 = std::vector<int,std::allocator<int>>::size(pvVar3);
        local_11 = '\0';
        for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
          pvVar3 = (vector<int,std::allocator<int>> *)
                   std::
                   vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                   ::operator[]((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                                 *)(local_28 + 0x2c),local_1c);
          puVar4 = (uint *)std::vector<int,std::allocator<int>>::operator[](pvVar3,local_10);
          local_24 = *puVar4;
          cVar1 = WongWork::CQuestClear::isClearedQuest(param_2,local_24);
          if (cVar1 != '\x01') {
            local_11 = '\x01';
            break;
          }
        }
        if (local_11 != '\x01') {
          return 1;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
