# RemoveMail

`_ZN8WongWork8CMailBox10RemoveMailEj`

`WongWork::CMailBox::RemoveMail(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox` | `0x08552138` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08552138  _ZN8WongWork8CMailBox10RemoveMailEj
#           WongWork::CMailBox::RemoveMail(unsigned int)
# range [0x08552138, 0x085522c3]
08552138 +0x000:  push   %ebp
08552139 +0x001:  mov    %esp,%ebp
0855213b +0x003:  push   %ebx
0855213c +0x004:  sub    $0x44,%esp
0855213f +0x007:  movl   $0x0,-0x10(%ebp)
08552146 +0x00e:  lea    -0x1c(%ebp),%eax
08552149 +0x011:  mov    %eax,(%esp)
0855214c +0x014:  call   08558198 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xcf9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xcf9
08552151 +0x019:  mov    0x8(%ebp),%eax
08552154 +0x01c:  lea    0x40(%eax),%ecx
08552157 +0x01f:  lea    -0x2c(%ebp),%eax
0855215a +0x022:  lea    0xc(%ebp),%edx
0855215d +0x025:  mov    %edx,0x8(%esp)
08552161 +0x029:  mov    %ecx,0x4(%esp)
08552165 +0x02d:  mov    %eax,(%esp)
08552168 +0x030:  call   0855862a <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x118b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x118b
0855216d +0x035:  sub    $0x4,%esp
08552170 +0x038:  mov    -0x2c(%ebp),%eax
08552173 +0x03b:  mov    %eax,-0x1c(%ebp)
08552176 +0x03e:  mov    0x8(%ebp),%eax
08552179 +0x041:  lea    0x40(%eax),%edx
0855217c +0x044:  lea    -0x18(%ebp),%eax
0855217f +0x047:  mov    %edx,0x4(%esp)
08552183 +0x04b:  mov    %eax,(%esp)
08552186 +0x04e:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
0855218b +0x053:  sub    $0x4,%esp
0855218e +0x056:  lea    -0x18(%ebp),%eax
08552191 +0x059:  mov    %eax,0x4(%esp)
08552195 +0x05d:  lea    -0x1c(%ebp),%eax
08552198 +0x060:  mov    %eax,(%esp)
0855219b +0x063:  call   08558656 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x11b7>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x11b7
085521a0 +0x068:  test   %al,%al
085521a2 +0x06a:  je     085521ae <+0x76>
085521a4 +0x06c:  mov    $0x0,%eax
085521a9 +0x071:  jmp    085522be <+0x186>
085521ae +0x076:  lea    -0x1c(%ebp),%eax
085521b1 +0x079:  mov    %eax,(%esp)
085521b4 +0x07c:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
085521b9 +0x081:  mov    0x4(%eax),%eax
085521bc +0x084:  mov    %eax,-0x10(%ebp)
085521bf +0x087:  mov    0x8(%ebp),%eax
085521c2 +0x08a:  lea    0x40(%eax),%edx
085521c5 +0x08d:  mov    -0x1c(%ebp),%eax
085521c8 +0x090:  mov    %eax,0x4(%esp)
085521cc +0x094:  mov    %edx,(%esp)
085521cf +0x097:  call   0855866a <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x11cb>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x11cb
085521d4 +0x09c:  mov    -0x10(%ebp),%eax
085521d7 +0x09f:  mov    %eax,(%esp)
085521da +0x0a2:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
085521df +0x0a7:  test   %eax,%eax
085521e1 +0x0a9:  setne  %al
085521e4 +0x0ac:  test   %al,%al
085521e6 +0x0ae:  je     08552299 <+0x161>
085521ec +0x0b4:  movb   $0x0,-0x9(%ebp)
085521f0 +0x0b8:  mov    0x8(%ebp),%eax
085521f3 +0x0bb:  lea    0x40(%eax),%edx
085521f6 +0x0be:  lea    -0x2c(%ebp),%eax
085521f9 +0x0c1:  mov    %edx,0x4(%esp)
085521fd +0x0c5:  mov    %eax,(%esp)
08552200 +0x0c8:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
08552205 +0x0cd:  sub    $0x4,%esp
08552208 +0x0d0:  mov    -0x2c(%ebp),%eax
0855220b +0x0d3:  mov    %eax,-0x1c(%ebp)
0855220e +0x0d6:  jmp    0855224b <+0x113>
08552210 +0x0d8:  lea    -0x1c(%ebp),%eax
08552213 +0x0db:  mov    %eax,(%esp)
08552216 +0x0de:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
0855221b +0x0e3:  mov    0x4(%eax),%eax
0855221e +0x0e6:  mov    %eax,(%esp)
08552221 +0x0e9:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
08552226 +0x0ee:  mov    %eax,%ebx
08552228 +0x0f0:  mov    -0x10(%ebp),%eax
0855222b +0x0f3:  mov    %eax,(%esp)
0855222e +0x0f6:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
08552233 +0x0fb:  cmp    %eax,%ebx
08552235 +0x0fd:  sete   %al
08552238 +0x100:  test   %al,%al
0855223a +0x102:  je     08552240 <+0x108>
0855223c +0x104:  movb   $0x1,-0x9(%ebp)
08552240 +0x108:  lea    -0x1c(%ebp),%eax
08552243 +0x10b:  mov    %eax,(%esp)
08552246 +0x10e:  call   08558206 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd67>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd67
0855224b +0x113:  mov    0x8(%ebp),%eax
0855224e +0x116:  lea    0x40(%eax),%edx
08552251 +0x119:  lea    -0x14(%ebp),%eax
08552254 +0x11c:  mov    %edx,0x4(%esp)
08552258 +0x120:  mov    %eax,(%esp)
0855225b +0x123:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
08552260 +0x128:  sub    $0x4,%esp
08552263 +0x12b:  lea    -0x14(%ebp),%eax
08552266 +0x12e:  mov    %eax,0x4(%esp)
0855226a +0x132:  lea    -0x1c(%ebp),%eax
0855226d +0x135:  mov    %eax,(%esp)
08552270 +0x138:  call   085581f2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd53>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd53
08552275 +0x13d:  test   %al,%al
08552277 +0x13f:  jne    08552210 <+0xd8>
08552279 +0x141:  movzbl -0x9(%ebp),%eax
0855227d +0x145:  xor    $0x1,%eax
08552280 +0x148:  test   %al,%al
08552282 +0x14a:  je     08552299 <+0x161>
08552284 +0x14c:  mov    0x8(%ebp),%eax
08552287 +0x14f:  mov    0x80(%eax),%eax
0855228d +0x155:  lea    0x1(%eax),%edx
08552290 +0x158:  mov    0x8(%ebp),%eax
08552293 +0x15b:  mov    %edx,0x80(%eax)
08552299 +0x161:  mov    -0x10(%ebp),%eax
0855229c +0x164:  mov    %eax,(%esp)
0855229f +0x167:  call   085519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>  ; WongWork::CMailBox::CMail::ResetPackage()
085522a4 +0x16c:  mov    0x8(%ebp),%eax
085522a7 +0x16f:  lea    0x10(%eax),%edx
085522aa +0x172:  mov    -0x10(%ebp),%eax
085522ad +0x175:  mov    %eax,0x4(%esp)
085522b1 +0x179:  mov    %edx,(%esp)
085522b4 +0x17c:  call   08558232 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd93>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd93
085522b9 +0x181:  mov    $0x1,%eax
085522be +0x186:  mov    -0x4(%ebp),%ebx
085522c1 +0x189:  leave
085522c2 +0x18a:  ret
085522c3 +0x18b:  nop
```

## 反编译 C

```c
// WongWork::CMailBox::RemoveMail @ 0x8552138

/* WongWork::CMailBox::RemoveMail(unsigned int) */

undefined4 WongWork::CMailBox::RemoveMail(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_30 [4];
  uint local_20;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_1c [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_18 [4];
  CMail *local_14;
  char local_d;
  
  local_14 = (CMail *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
  _Rb_tree_iterator((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                    &local_20);
  puVar5 = &stack0x00000008;
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::find(local_30);
  local_20 = local_30[0];
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
          operator==((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                     &local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        *)&local_20);
    local_14 = *(CMail **)(iVar3 + 4);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::erase((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)(param_1 + 0x40),local_20,puVar5);
    iVar3 = CMail::GetLetterId(local_14);
    if (iVar3 != 0) {
      local_d = '\0';
      std::
      map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
      ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
               *)local_30);
      local_20 = local_30[0];
      while( true ) {
        std::
        map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
        ::end(local_18);
        cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                            *)&local_20,(_Rb_tree_iterator *)local_18);
        if (cVar1 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                            *)&local_20);
        iVar3 = CMail::GetLetterId(*(CMail **)(iVar3 + 4));
        iVar4 = CMail::GetLetterId(local_14);
        if (iVar3 == iVar4) {
          local_d = '\x01';
        }
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                   &local_20);
      }
      if (local_d != '\x01') {
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      }
    }
    CMail::ResetPackage(local_14);
    StaticPool<WongWork::CMailBox::CMail,20>::Free
              ((StaticPool<WongWork::CMailBox::CMail,20> *)(param_1 + 0x10),local_14);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
