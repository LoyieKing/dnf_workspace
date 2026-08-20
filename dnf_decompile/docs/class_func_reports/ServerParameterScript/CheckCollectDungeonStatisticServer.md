# CheckCollectDungeonStatisticServer

`_ZN21ServerParameterScript34CheckCollectDungeonStatisticServerEii`

`ServerParameterScript::CheckCollectDungeonStatisticServer(int, int)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c2c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c2c0  _ZN21ServerParameterScript34CheckCollectDungeonStatisticServerEii
#           ServerParameterScript::CheckCollectDungeonStatisticServer(int, int)
# range [0x08a8c2c0, 0x08a8c36d]
08a8c2c0 +0x00:  push   %ebp
08a8c2c1 +0x01:  mov    %esp,%ebp
08a8c2c3 +0x03:  push   %esi
08a8c2c4 +0x04:  push   %ebx
08a8c2c5 +0x05:  sub    $0x30,%esp
08a8c2c8 +0x08:  movb   $0x0,-0x9(%ebp)
08a8c2cc +0x0c:  lea    -0x18(%ebp),%eax
08a8c2cf +0x0f:  mov    %eax,(%esp)
08a8c2d2 +0x12:  call   08a8cc0a <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x81>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x81
08a8c2d7 +0x17:  mov    0xc(%ebp),%eax
08a8c2da +0x1a:  mov    %eax,-0x18(%ebp)
08a8c2dd +0x1d:  mov    0x10(%ebp),%eax
08a8c2e0 +0x20:  mov    %eax,-0x14(%ebp)
08a8c2e3 +0x23:  mov    0x8(%ebp),%edx
08a8c2e6 +0x26:  lea    -0x1c(%ebp),%eax
08a8c2e9 +0x29:  lea    -0x18(%ebp),%ecx
08a8c2ec +0x2c:  mov    %ecx,0x8(%esp)
08a8c2f0 +0x30:  mov    %edx,0x4(%esp)
08a8c2f4 +0x34:  mov    %eax,(%esp)
08a8c2f7 +0x37:  call   08a8d9fe <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xe75>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xe75
08a8c2fc +0x3c:  sub    $0x4,%esp
08a8c2ff +0x3f:  mov    0x8(%ebp),%edx
08a8c302 +0x42:  lea    -0x10(%ebp),%eax
08a8c305 +0x45:  mov    %edx,0x4(%esp)
08a8c309 +0x49:  mov    %eax,(%esp)
08a8c30c +0x4c:  call   08a8da2a <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xea1>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xea1
08a8c311 +0x51:  sub    $0x4,%esp
08a8c314 +0x54:  lea    -0x10(%ebp),%eax
08a8c317 +0x57:  mov    %eax,0x4(%esp)
08a8c31b +0x5b:  lea    -0x1c(%ebp),%eax
08a8c31e +0x5e:  mov    %eax,(%esp)
08a8c321 +0x61:  call   08a8da50 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xec7>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xec7
08a8c326 +0x66:  test   %al,%al
08a8c328 +0x68:  je     08a8c33c <+0x7c>
08a8c32a +0x6a:  lea    -0x1c(%ebp),%eax
08a8c32d +0x6d:  mov    %eax,(%esp)
08a8c330 +0x70:  call   08a8da64 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xedb>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xedb
08a8c335 +0x75:  movzbl 0x8(%eax),%eax
08a8c339 +0x79:  mov    %al,-0x9(%ebp)
08a8c33c +0x7c:  movzbl -0x9(%ebp),%ebx
08a8c340 +0x80:  lea    -0x18(%ebp),%eax
08a8c343 +0x83:  mov    %eax,(%esp)
08a8c346 +0x86:  call   0836f29c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x9268>  ; global constructors keyed to CServerEvent::m_nExpRate+0x9268
08a8c34b +0x8b:  mov    %ebx,%eax
08a8c34d +0x8d:  lea    -0x8(%ebp),%esp
08a8c350 +0x90:  add    $0x0,%esp
08a8c353 +0x93:  pop    %ebx
08a8c354 +0x94:  pop    %esi
08a8c355 +0x95:  pop    %ebp
08a8c356 +0x96:  ret
08a8c357 +0x97:  mov    %edx,%ebx
08a8c359 +0x99:  mov    %eax,%esi
08a8c35b +0x9b:  lea    -0x18(%ebp),%eax
08a8c35e +0x9e:  mov    %eax,(%esp)
08a8c361 +0xa1:  call   0836f29c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x9268>  ; global constructors keyed to CServerEvent::m_nExpRate+0x9268
08a8c366 +0xa6:  mov    %esi,%eax
08a8c368 +0xa8:  mov    %ebx,%edx
08a8c36a +0xaa:  mov    %eax,(%esp)
08a8c36d +0xad:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ServerParameterScript::CheckCollectDungeonStatisticServer @ 0x8a8c2c0

/* ServerParameterScript::CheckCollectDungeonStatisticServer(int, int) */

undefined1 __thiscall
ServerParameterScript::CheckCollectDungeonStatisticServer
          (ServerParameterScript *this,int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  stServerIndex local_20 [4];
  int local_1c;
  int local_18;
  map<stServerIndex,bool,std::less<stServerIndex>,std::allocator<std::pair<stServerIndex_const,bool>>>
  local_14 [7];
  undefined1 local_d;
  
  local_d = 0;
  stServerIndex::stServerIndex((stServerIndex *)&local_1c);
  local_1c = param_1;
  local_18 = param_2;
                    /* try { // try from 08a8c2f7 to 08a8c310 has its CatchHandler @ 08a8c357 */
  std::
  map<stServerIndex,bool,std::less<stServerIndex>,std::allocator<std::pair<stServerIndex_const,bool>>>
  ::find(local_20);
  std::
  map<stServerIndex,bool,std::less<stServerIndex>,std::allocator<std::pair<stServerIndex_const,bool>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_iterator<std::pair<stServerIndex_const,bool>>::operator!=
                    ((_Rb_tree_iterator<std::pair<stServerIndex_const,bool>> *)local_20,
                     (_Rb_tree_iterator *)local_14);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<stServerIndex_const,bool>>::operator->
                      ((_Rb_tree_iterator<std::pair<stServerIndex_const,bool>> *)local_20);
    local_d = *(undefined1 *)(iVar3 + 8);
  }
  uVar1 = local_d;
  stServerIndex::~stServerIndex((stServerIndex *)&local_1c);
  return uVar1;
}
```
