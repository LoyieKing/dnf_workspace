# findSkillCommandData

`_ZN5CUser20findSkillCommandDataEiR18STSkillCommandDatab`

`CUser::findSkillCommandData(int, STSkillCommandData&, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08654e6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08654e6a  _ZN5CUser20findSkillCommandDataEiR18STSkillCommandDatab
#           CUser::findSkillCommandData(int, STSkillCommandData&, bool)
# range [0x08654e6a, 0x08654f73]
08654e6a +0x000:  push   %ebp
08654e6b +0x001:  mov    %esp,%ebp
08654e6d +0x003:  push   %ebx
08654e6e +0x004:  sub    $0x34,%esp
08654e71 +0x007:  mov    0x14(%ebp),%eax
08654e74 +0x00a:  mov    %al,-0x1c(%ebp)
08654e77 +0x00d:  mov    0x8(%ebp),%eax
08654e7a +0x010:  mov    %eax,(%esp)
08654e7d +0x013:  call   08696bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3443
08654e82 +0x018:  mov    %eax,-0x10(%ebp)
08654e85 +0x01b:  cmpl   $0x0,-0x10(%ebp)
08654e89 +0x01f:  jne    08654e95 <+0x2b>
08654e8b +0x021:  mov    $0x0,%eax
08654e90 +0x026:  jmp    08654f6e <+0x104>
08654e95 +0x02b:  lea    -0x18(%ebp),%eax
08654e98 +0x02e:  lea    0xc(%ebp),%edx
08654e9b +0x031:  mov    %edx,0x8(%esp)
08654e9f +0x035:  mov    -0x10(%ebp),%edx
08654ea2 +0x038:  mov    %edx,0x4(%esp)
08654ea6 +0x03c:  mov    %eax,(%esp)
08654ea9 +0x03f:  call   0869ab5a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73af>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73af
08654eae +0x044:  sub    $0x4,%esp
08654eb1 +0x047:  lea    -0x14(%ebp),%eax
08654eb4 +0x04a:  mov    -0x10(%ebp),%edx
08654eb7 +0x04d:  mov    %edx,0x4(%esp)
08654ebb +0x051:  mov    %eax,(%esp)
08654ebe +0x054:  call   0869aaf4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7349>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7349
08654ec3 +0x059:  sub    $0x4,%esp
08654ec6 +0x05c:  lea    -0x14(%ebp),%eax
08654ec9 +0x05f:  mov    %eax,0x4(%esp)
08654ecd +0x063:  lea    -0x18(%ebp),%eax
08654ed0 +0x066:  mov    %eax,(%esp)
08654ed3 +0x069:  call   0869ab1a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x736f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x736f
08654ed8 +0x06e:  test   %al,%al
08654eda +0x070:  je     08654f69 <+0xff>
08654ee0 +0x076:  lea    -0x18(%ebp),%eax
08654ee3 +0x079:  mov    %eax,(%esp)
08654ee6 +0x07c:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654eeb +0x081:  movzwl 0x4(%eax),%edx
08654eef +0x085:  mov    0x10(%ebp),%eax
08654ef2 +0x088:  mov    %dx,(%eax)
08654ef5 +0x08b:  lea    -0x18(%ebp),%eax
08654ef8 +0x08e:  mov    %eax,(%esp)
08654efb +0x091:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654f00 +0x096:  movzbl 0x6(%eax),%edx
08654f04 +0x09a:  mov    0x10(%ebp),%eax
08654f07 +0x09d:  mov    %dl,0x2(%eax)
08654f0a +0x0a0:  movl   $0x0,-0xc(%ebp)
08654f11 +0x0a7:  jmp    08654f4e <+0xe4>
08654f13 +0x0a9:  mov    -0xc(%ebp),%ebx
08654f16 +0x0ac:  lea    -0x18(%ebp),%eax
08654f19 +0x0af:  mov    %eax,(%esp)
08654f1c +0x0b2:  call   0869ab4c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x73a1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x73a1
08654f21 +0x0b7:  mov    -0xc(%ebp),%edx
08654f24 +0x0ba:  movzbl 0x7(%eax,%edx,1),%edx
08654f29 +0x0bf:  mov    0x10(%ebp),%eax
08654f2c +0x0c2:  mov    %dl,0x3(%eax,%ebx,1)
08654f30 +0x0c6:  mov    -0xc(%ebp),%eax
08654f33 +0x0c9:  mov    0x10(%ebp),%edx
08654f36 +0x0cc:  movzbl 0x3(%edx,%eax,1),%eax
08654f3b +0x0d1:  cmp    $0x7,%al
08654f3d +0x0d3:  jne    08654f4a <+0xe0>
08654f3f +0x0d5:  mov    -0xc(%ebp),%eax
08654f42 +0x0d8:  mov    0x10(%ebp),%edx
08654f45 +0x0db:  movb   $0x8,0x3(%edx,%eax,1)
08654f4a +0x0e0:  addl   $0x1,-0xc(%ebp)
08654f4e +0x0e4:  mov    0x10(%ebp),%eax
08654f51 +0x0e7:  movzbl 0x2(%eax),%eax
08654f55 +0x0eb:  movsbl %al,%eax
08654f58 +0x0ee:  cmp    -0xc(%ebp),%eax
08654f5b +0x0f1:  setg   %al
08654f5e +0x0f4:  test   %al,%al
08654f60 +0x0f6:  jne    08654f13 <+0xa9>
08654f62 +0x0f8:  mov    $0x1,%eax
08654f67 +0x0fd:  jmp    08654f6e <+0x104>
08654f69 +0x0ff:  mov    $0x0,%eax
08654f6e +0x104:  mov    -0x4(%ebp),%ebx
08654f71 +0x107:  leave
08654f72 +0x108:  ret
08654f73 +0x109:  nop
```

## 反编译 C

```c
// CUser::findSkillCommandData @ 0x8654e6a

/* CUser::findSkillCommandData(int, STSkillCommandData&, bool) */

undefined4 CUser::findSkillCommandData(int param_1,STSkillCommandData *param_2,bool param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined3 in_stack_0000000d;
  _Rb_tree_iterator<std::pair<int_const,STSkillCommandData>> local_1c [4];
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = CUserCharacInfo::getSkillCommand((CUserCharacInfo *)param_1);
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::find((int *)local_1c);
    std::
    map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator!=
                      (local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->(local_1c);
      *_param_3 = *(undefined2 *)(iVar3 + 4);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->(local_1c);
      *(undefined1 *)(_param_3 + 1) = *(undefined1 *)(iVar3 + 6);
      for (local_10 = 0; iVar3 = local_10, local_10 < *(char *)(_param_3 + 1);
          local_10 = local_10 + 1) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STSkillCommandData>>::operator->
                          (local_1c);
        *(undefined1 *)((int)_param_3 + iVar3 + 3) = *(undefined1 *)(iVar4 + 7 + local_10);
        if (*(char *)((int)_param_3 + local_10 + 3) == '\a') {
          *(undefined1 *)((int)_param_3 + local_10 + 3) = 8;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
