# verifyClientState

`_ZN5yaSSL3SSL17verifyClientStateENS_13HandShakeTypeE`

`yaSSL::SSL::verifyClientState(yaSSL::HandShakeType)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874eb40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874eb40  _ZN5yaSSL3SSL17verifyClientStateENS_13HandShakeTypeE
#           yaSSL::SSL::verifyClientState(yaSSL::HandShakeType)
# range [0x0874eb40, 0x0874ec49]
0874eb40 +0x000:  push   %ebp
0874eb41 +0x001:  mov    %esp,%ebp
0874eb43 +0x003:  sub    $0x28,%esp
0874eb46 +0x006:  mov    %ebx,-0xc(%ebp)
0874eb49 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
0874eb4e +0x00e:  add    $0xc1e04a,%ebx
0874eb54 +0x014:  mov    %esi,-0x8(%ebp)
0874eb57 +0x017:  mov    0x8(%ebp),%esi
0874eb5a +0x01a:  mov    %edi,-0x4(%ebp)
0874eb5d +0x01d:  mov    0xc(%ebp),%edi
0874eb60 +0x020:  mov    %esi,(%esp)
0874eb63 +0x023:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874eb68 +0x028:  test   %eax,%eax
0874eb6a +0x02a:  jne    0874eb79 <+0x39>
0874eb6c +0x02c:  cmp    $0x14,%edi
0874eb6f +0x02f:  jbe    0874eb88 <+0x48>
0874eb71 +0x031:  mov    %esi,(%esp)
0874eb74 +0x034:  call   0874e030 <_ZN5yaSSL3SSL11order_errorEv>  ; yaSSL::SSL::order_error()
0874eb79 +0x039:  mov    -0xc(%ebp),%ebx
0874eb7c +0x03c:  mov    -0x8(%ebp),%esi
0874eb7f +0x03f:  mov    -0x4(%ebp),%edi
0874eb82 +0x042:  mov    %ebp,%esp
0874eb84 +0x044:  pop    %ebp
0874eb85 +0x045:  ret
0874eb86 +0x046:  xchg   %ax,%ax
0874eb88 +0x048:  mov    -0x667c44(%ebx,%edi,4),%eax
0874eb8f +0x04f:  add    %ebx,%eax
0874eb91 +0x051:  jmp    *%eax
0874eb93 +0x053:  nop
0874eb94 +0x054:  lea    0x0(%esi,%eiz,1),%esi
0874eb98 +0x058:  lea    0x8ec(%esi),%edi
0874eb9e +0x05e:  mov    %edi,(%esp)
0874eba1 +0x061:  call   0874dea0 <_ZNK5yaSSL6States9getClientEv>  ; yaSSL::States::getClient() const
0874eba6 +0x066:  cmpl   $0x2,(%eax)
0874eba9 +0x069:  je     0874eb79 <+0x39>
0874ebab +0x06b:  mov    %edi,(%esp)
0874ebae +0x06e:  call   0874dea0 <_ZNK5yaSSL6States9getClientEv>  ; yaSSL::States::getClient() const
0874ebb3 +0x073:  cmpl   $0x3,(%eax)
0874ebb6 +0x076:  jne    0874eb71 <+0x31>
0874ebb8 +0x078:  jmp    0874eb79 <+0x39>
0874ebba +0x07a:  lea    0x0(%esi),%esi
0874ebc0 +0x080:  lea    0x8ec(%esi),%eax
0874ebc6 +0x086:  mov    %eax,(%esp)
0874ebc9 +0x089:  call   0874dea0 <_ZNK5yaSSL6States9getClientEv>  ; yaSSL::States::getClient() const
0874ebce +0x08e:  cmpl   $0x4,(%eax)
0874ebd1 +0x091:  jne    0874eb71 <+0x31>
0874ebd3 +0x093:  lea    0x68(%esi),%eax
0874ebd6 +0x096:  mov    %eax,(%esp)
0874ebd9 +0x099:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874ebde +0x09e:  cmpb   $0x0,0x28(%eax)
0874ebe2 +0x0a2:  je     0874eb79 <+0x39>
0874ebe4 +0x0a4:  jmp    0874eb71 <+0x31>
0874ebe6 +0x0a6:  xchg   %ax,%ax
0874ebe8 +0x0a8:  lea    0x8ec(%esi),%eax
0874ebee +0x0ae:  mov    %eax,(%esp)
0874ebf1 +0x0b1:  call   0874dea0 <_ZNK5yaSSL6States9getClientEv>  ; yaSSL::States::getClient() const
0874ebf6 +0x0b6:  cmpl   $0x2,(%eax)
0874ebf9 +0x0b9:  jne    0874eb71 <+0x31>
0874ebff +0x0bf:  jmp    0874eb79 <+0x39>
0874ec04 +0x0c4:  lea    0x0(%esi,%eiz,1),%esi
0874ec08 +0x0c8:  lea    0x8ec(%esi),%eax
0874ec0e +0x0ce:  mov    %eax,(%esp)
0874ec11 +0x0d1:  call   0874dea0 <_ZNK5yaSSL6States9getClientEv>  ; yaSSL::States::getClient() const
0874ec16 +0x0d6:  cmpl   $0x1,(%eax)
0874ec19 +0x0d9:  jne    0874eb71 <+0x31>
0874ec1f +0x0df:  jmp    0874eb79 <+0x39>
0874ec24 +0x0e4:  lea    0x0(%esi,%eiz,1),%esi
0874ec28 +0x0e8:  lea    0x8ec(%esi),%eax
0874ec2e +0x0ee:  mov    %eax,(%esp)
0874ec31 +0x0f1:  call   0874dea0 <_ZNK5yaSSL6States9getClientEv>  ; yaSSL::States::getClient() const
0874ec36 +0x0f6:  mov    (%eax),%edi
0874ec38 +0x0f8:  test   %edi,%edi
0874ec3a +0x0fa:  je     0874eb79 <+0x39>
0874ec40 +0x100:  jmp    0874eb71 <+0x31>
0874ec45 +0x105:  nop
0874ec46 +0x106:  lea    0x0(%esi),%esi
0874ec49 +0x109:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::verifyClientState @ 0x874eb40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyClientState(yaSSL::HandShakeType) */

void __thiscall yaSSL::SSL::verifyClientState(SSL *this,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    switch(param_2) {
    case 2:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 0) {
        return;
      }
      break;
    case 0xb:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 1) {
        return;
      }
      break;
    case 0xc:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 2) {
        return;
      }
      break;
    case 0xd:
    case 0xe:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 2) {
        return;
      }
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if (*piVar2 == 3) {
        return;
      }
      break;
    case 0x14:
      piVar2 = (int *)States::getClient((States *)(this + 0x8ec));
      if ((*piVar2 == 4) &&
         (iVar1 = Security::get_parms((Security *)(this + 0x68)), *(char *)(iVar1 + 0x28) == '\0'))
      {
        return;
      }
    }
    order_error(this);
  }
  return;
}
```
