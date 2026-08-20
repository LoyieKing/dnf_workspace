# init_evnet_entity

`_ZN13EventClassify15CEventScriptMng17init_evnet_entityEv`

`EventClassify::CEventScriptMng::init_evnet_entity()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810bd14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810bd14  _ZN13EventClassify15CEventScriptMng17init_evnet_entityEv
#           EventClassify::CEventScriptMng::init_evnet_entity()
# range [0x0810bd14, 0x0810bddf]
0810bd14 +0x00:  push   %ebp
0810bd15 +0x01:  mov    %esp,%ebp
0810bd17 +0x03:  push   %ebx
0810bd18 +0x04:  sub    $0x24,%esp
0810bd1b +0x07:  mov    0x8(%ebp),%eax
0810bd1e +0x0a:  mov    %eax,(%esp)
0810bd21 +0x0d:  call   0810cdb0 <_ZN13EventClassify15CEventScriptMng15init_event_numsEv>  ; EventClassify::CEventScriptMng::init_event_nums()
0810bd26 +0x12:  movl   $0x0,-0xc(%ebp)
0810bd2d +0x19:  jmp    0810bdbe <+0xaa>
0810bd32 +0x1e:  mov    -0xc(%ebp),%eax
0810bd35 +0x21:  mov    0x8(%ebp),%edx
0810bd38 +0x24:  add    $0x50,%edx
0810bd3b +0x27:  mov    %eax,0x4(%esp)
0810bd3f +0x2b:  mov    %edx,(%esp)
0810bd42 +0x2e:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810bd47 +0x33:  mov    (%eax),%eax
0810bd49 +0x35:  mov    %eax,0x4(%esp)
0810bd4d +0x39:  mov    0x8(%ebp),%eax
0810bd50 +0x3c:  mov    %eax,(%esp)
0810bd53 +0x3f:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810bd58 +0x44:  test   %eax,%eax
0810bd5a +0x46:  sete   %al
0810bd5d +0x49:  test   %al,%al
0810bd5f +0x4b:  je     0810bdba <+0xa6>
0810bd61 +0x4d:  mov    -0xc(%ebp),%eax
0810bd64 +0x50:  mov    0x8(%ebp),%edx
0810bd67 +0x53:  add    $0x50,%edx
0810bd6a +0x56:  mov    %eax,0x4(%esp)
0810bd6e +0x5a:  mov    %edx,(%esp)
0810bd71 +0x5d:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810bd76 +0x62:  mov    0x8(%ebp),%edx
0810bd79 +0x65:  add    $0x30,%edx
0810bd7c +0x68:  mov    %eax,0x4(%esp)
0810bd80 +0x6c:  mov    %edx,(%esp)
0810bd83 +0x6f:  call   081116c4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbd6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbd6
0810bd88 +0x74:  mov    %eax,%ebx
0810bd8a +0x76:  mov    -0xc(%ebp),%eax
0810bd8d +0x79:  mov    0x8(%ebp),%edx
0810bd90 +0x7c:  add    $0x50,%edx
0810bd93 +0x7f:  mov    %eax,0x4(%esp)
0810bd97 +0x83:  mov    %edx,(%esp)
0810bd9a +0x86:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810bd9f +0x8b:  mov    (%eax),%eax
0810bda1 +0x8d:  movl   $0x1,0x8(%esp)
0810bda9 +0x95:  mov    %eax,0x4(%esp)
0810bdad +0x99:  mov    0x8(%ebp),%eax
0810bdb0 +0x9c:  mov    %eax,(%esp)
0810bdb3 +0x9f:  call   0810b402 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib>  ; EventClassify::CEventScriptMng::create_event_entity(int, bool)
0810bdb8 +0xa4:  mov    %eax,(%ebx)
0810bdba +0xa6:  addl   $0x1,-0xc(%ebp)
0810bdbe +0xaa:  mov    0x8(%ebp),%eax
0810bdc1 +0xad:  add    $0x50,%eax
0810bdc4 +0xb0:  mov    %eax,(%esp)
0810bdc7 +0xb3:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0810bdcc +0xb8:  cmp    -0xc(%ebp),%eax
0810bdcf +0xbb:  setg   %al
0810bdd2 +0xbe:  test   %al,%al
0810bdd4 +0xc0:  jne    0810bd32 <+0x1e>
0810bdda +0xc6:  add    $0x24,%esp
0810bddd +0xc9:  pop    %ebx
0810bdde +0xca:  pop    %ebp
0810bddf +0xcb:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::init_evnet_entity @ 0x810bd14

/* EventClassify::CEventScriptMng::init_evnet_entity() */

void __thiscall EventClassify::CEventScriptMng::init_evnet_entity(CEventScriptMng *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_10;
  
  init_event_nums(this);
  local_10 = 0;
  while( true ) {
    iVar4 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x50));
    if (iVar4 <= (int)local_10) break;
    std::vector<int,std::allocator<int>>::operator[]
              ((vector<int,std::allocator<int>> *)(this + 0x50),local_10);
    iVar4 = get_event_entity((int)this);
    if (iVar4 == 0) {
      piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x50),local_10);
      puVar2 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(this + 0x30),piVar1);
      piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x50),local_10);
      uVar3 = create_event_entity(this,*piVar1,true);
      *puVar2 = uVar3;
    }
    local_10 = local_10 + 1;
  }
  return;
}
```
