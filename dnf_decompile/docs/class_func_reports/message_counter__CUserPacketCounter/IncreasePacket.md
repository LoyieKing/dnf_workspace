# IncreasePacket

`_ZN15message_counter18CUserPacketCounter14IncreasePacketEj`

`message_counter::CUserPacketCounter::IncreasePacket(unsigned int)`

| 类 | 地址 |
|---|---|
| `message_counter::CUserPacketCounter` | `0x0856ff24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856ff24  _ZN15message_counter18CUserPacketCounter14IncreasePacketEj
#           message_counter::CUserPacketCounter::IncreasePacket(unsigned int)
# range [0x0856ff24, 0x0856ffef]
0856ff24 +0x00:  push   %ebp
0856ff25 +0x01:  mov    %esp,%ebp
0856ff27 +0x03:  sub    $0x48,%esp
0856ff2a +0x06:  mov    0x8(%ebp),%edx
0856ff2d +0x09:  lea    -0x2c(%ebp),%eax
0856ff30 +0x0c:  lea    0xc(%ebp),%ecx
0856ff33 +0x0f:  mov    %ecx,0x8(%esp)
0856ff37 +0x13:  mov    %edx,0x4(%esp)
0856ff3b +0x17:  mov    %eax,(%esp)
0856ff3e +0x1a:  call   0845026c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e82>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e82
0856ff43 +0x1f:  sub    $0x4,%esp
0856ff46 +0x22:  mov    0x8(%ebp),%edx
0856ff49 +0x25:  lea    -0x28(%ebp),%eax
0856ff4c +0x28:  mov    %edx,0x4(%esp)
0856ff50 +0x2c:  mov    %eax,(%esp)
0856ff53 +0x2f:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
0856ff58 +0x34:  sub    $0x4,%esp
0856ff5b +0x37:  lea    -0x28(%ebp),%eax
0856ff5e +0x3a:  mov    %eax,0x4(%esp)
0856ff62 +0x3e:  lea    -0x2c(%ebp),%eax
0856ff65 +0x41:  mov    %eax,(%esp)
0856ff68 +0x44:  call   084502be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ed4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ed4
0856ff6d +0x49:  test   %al,%al
0856ff6f +0x4b:  je     0856ff87 <+0x63>
0856ff71 +0x4d:  lea    -0x2c(%ebp),%eax
0856ff74 +0x50:  mov    %eax,(%esp)
0856ff77 +0x53:  call   084502d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ee8
0856ff7c +0x58:  mov    0x4(%eax),%edx
0856ff7f +0x5b:  add    $0x1,%edx
0856ff82 +0x5e:  mov    %edx,0x4(%eax)
0856ff85 +0x61:  jmp    0856ffd8 <+0xb4>
0856ff87 +0x63:  movl   $0x1,-0xc(%ebp)
0856ff8e +0x6a:  lea    -0x14(%ebp),%eax
0856ff91 +0x6d:  lea    -0xc(%ebp),%edx
0856ff94 +0x70:  mov    %edx,0x8(%esp)
0856ff98 +0x74:  lea    0xc(%ebp),%edx
0856ff9b +0x77:  mov    %edx,0x4(%esp)
0856ff9f +0x7b:  mov    %eax,(%esp)
0856ffa2 +0x7e:  call   082ac1f6 <_GLOBAL__I__ZN4CLog5this_E+0x861d>  ; global constructors keyed to CLog::this_+0x861d
0856ffa7 +0x83:  sub    $0x4,%esp
0856ffaa +0x86:  lea    -0x14(%ebp),%eax
0856ffad +0x89:  mov    %eax,0x4(%esp)
0856ffb1 +0x8d:  lea    -0x1c(%ebp),%eax
0856ffb4 +0x90:  mov    %eax,(%esp)
0856ffb7 +0x93:  call   082ac19a <_GLOBAL__I__ZN4CLog5this_E+0x85c1>  ; global constructors keyed to CLog::this_+0x85c1
0856ffbc +0x98:  mov    0x8(%ebp),%edx
0856ffbf +0x9b:  lea    -0x24(%ebp),%eax
0856ffc2 +0x9e:  lea    -0x1c(%ebp),%ecx
0856ffc5 +0xa1:  mov    %ecx,0x8(%esp)
0856ffc9 +0xa5:  mov    %edx,0x4(%esp)
0856ffcd +0xa9:  mov    %eax,(%esp)
0856ffd0 +0xac:  call   082ac1ca <_GLOBAL__I__ZN4CLog5this_E+0x85f1>  ; global constructors keyed to CLog::this_+0x85f1
0856ffd5 +0xb1:  sub    $0x4,%esp
0856ffd8 +0xb4:  mov    0x8(%ebp),%eax
0856ffdb +0xb7:  mov    0x118(%eax),%eax
0856ffe1 +0xbd:  lea    0x1(%eax),%edx
0856ffe4 +0xc0:  mov    0x8(%ebp),%eax
0856ffe7 +0xc3:  mov    %edx,0x118(%eax)
0856ffed +0xc9:  leave
0856ffee +0xca:  ret
0856ffef +0xcb:  nop
```

## 反编译 C

```c
// message_counter::CUserPacketCounter::IncreasePacket @ 0x856ff24

/* message_counter::CUserPacketCounter::IncreasePacket(unsigned int) */

void message_counter::CUserPacketCounter::IncreasePacket(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_30 [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_2c [4];
  pair local_28 [8];
  pair<unsigned_int_const,int> local_20 [8];
  uint local_18 [2];
  undefined4 local_10;
  
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  find((uint *)local_30);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  end(local_2c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                    (local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar1 == '\0') {
    local_10 = 1;
    std::make_pair<unsigned_int&,int>(local_18,(int *)&stack0x00000008);
    std::pair<unsigned_int_const,int>::pair<unsigned_int,int>(local_20,(pair *)local_18);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::insert(local_28);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->(local_30);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  return;
}
```
