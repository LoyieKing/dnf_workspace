# historyBloodRoundClear

`_ZN6CParty22historyBloodRoundClearEijjPKc`

`CParty::historyBloodRoundClear(int, unsigned int, unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b7db6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b7db6  _ZN6CParty22historyBloodRoundClearEijjPKc
#           CParty::historyBloodRoundClear(int, unsigned int, unsigned int, char const*)
# range [0x085b7db6, 0x085b7ea1]
085b7db6 +0x00:  push   %ebp
085b7db7 +0x01:  mov    %esp,%ebp
085b7db9 +0x03:  push   %edi
085b7dba +0x04:  push   %ebx
085b7dbb +0x05:  sub    $0x130,%esp
085b7dc1 +0x0b:  lea    -0x10c(%ebp),%ebx
085b7dc7 +0x11:  mov    $0x0,%eax
085b7dcc +0x16:  mov    $0x40,%edx
085b7dd1 +0x1b:  mov    %ebx,%edi
085b7dd3 +0x1d:  mov    %edx,%ecx
085b7dd5 +0x1f:  rep stos %eax,%es:(%edi)
085b7dd7 +0x21:  lea    -0x10c(%ebp),%eax
085b7ddd +0x27:  mov    %eax,0x4(%esp)
085b7de1 +0x2b:  mov    0x8(%ebp),%eax
085b7de4 +0x2e:  mov    %eax,(%esp)
085b7de7 +0x31:  call   08145882 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x305>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x305
085b7dec +0x36:  movl   $0x0,-0xc(%ebp)
085b7df3 +0x3d:  jmp    085b7e89 <+0xd3>
085b7df8 +0x42:  mov    -0xc(%ebp),%eax
085b7dfb +0x45:  mov    %eax,0x4(%esp)
085b7dff +0x49:  mov    0x8(%ebp),%eax
085b7e02 +0x4c:  mov    %eax,(%esp)
085b7e05 +0x4f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b7e0a +0x54:  test   %eax,%eax
085b7e0c +0x56:  je     085b7e27 <+0x71>
085b7e0e +0x58:  mov    -0xc(%ebp),%eax
085b7e11 +0x5b:  mov    %eax,0x4(%esp)
085b7e15 +0x5f:  mov    0x8(%ebp),%eax
085b7e18 +0x62:  mov    %eax,(%esp)
085b7e1b +0x65:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b7e20 +0x6a:  xor    $0x1,%eax
085b7e23 +0x6d:  test   %al,%al
085b7e25 +0x6f:  je     085b7e2e <+0x78>
085b7e27 +0x71:  mov    $0x1,%eax
085b7e2c +0x76:  jmp    085b7e33 <+0x7d>
085b7e2e +0x78:  mov    $0x0,%eax
085b7e33 +0x7d:  test   %al,%al
085b7e35 +0x7f:  jne    085b7e84 <+0xce>
085b7e37 +0x81:  mov    -0xc(%ebp),%edx
085b7e3a +0x84:  mov    0x8(%ebp),%ecx
085b7e3d +0x87:  mov    %edx,%eax
085b7e3f +0x89:  add    %eax,%eax
085b7e41 +0x8b:  add    %edx,%eax
085b7e43 +0x8d:  shl    $0x3,%eax
085b7e46 +0x90:  lea    (%ecx,%eax,1),%eax
085b7e49 +0x93:  add    $0x78,%eax
085b7e4c +0x96:  mov    (%eax),%eax
085b7e4e +0x98:  lea    0x79700(%eax),%edx
085b7e54 +0x9e:  lea    -0x10c(%ebp),%eax
085b7e5a +0xa4:  mov    %eax,0x14(%esp)
085b7e5e +0xa8:  mov    0x18(%ebp),%eax
085b7e61 +0xab:  mov    %eax,0x10(%esp)
085b7e65 +0xaf:  mov    0x14(%ebp),%eax
085b7e68 +0xb2:  mov    %eax,0xc(%esp)
085b7e6c +0xb6:  mov    0x10(%ebp),%eax
085b7e6f +0xb9:  mov    %eax,0x8(%esp)
085b7e73 +0xbd:  mov    0xc(%ebp),%eax
085b7e76 +0xc0:  mov    %eax,0x4(%esp)
085b7e7a +0xc4:  mov    %edx,(%esp)
085b7e7d +0xc7:  call   08684af0 <_ZN15cUserHistoryLog15BloodRoundClearEijjPKcS1_>  ; cUserHistoryLog::BloodRoundClear(int, unsigned int, unsigned int, char const*, char const*)
085b7e82 +0xcc:  jmp    085b7e85 <+0xcf>
085b7e84 +0xce:  nop
085b7e85 +0xcf:  addl   $0x1,-0xc(%ebp)
085b7e89 +0xd3:  cmpl   $0x3,-0xc(%ebp)
085b7e8d +0xd7:  setle  %al
085b7e90 +0xda:  test   %al,%al
085b7e92 +0xdc:  jne    085b7df8 <+0x42>
085b7e98 +0xe2:  add    $0x130,%esp
085b7e9e +0xe8:  pop    %ebx
085b7e9f +0xe9:  pop    %edi
085b7ea0 +0xea:  pop    %ebp
085b7ea1 +0xeb:  ret
```

## 反编译 C

```c
// CParty::historyBloodRoundClear @ 0x85b7db6

/* CParty::historyBloodRoundClear(int, unsigned int, unsigned int, char const*) */

void __thiscall
CParty::historyBloodRoundClear(CParty *this,int param_1,uint param_2,uint param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char local_110 [256];
  int local_10;
  
  pcVar4 = local_110;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  getMemberNames(this,local_110);
  local_10 = 0;
  do {
    if (3 < local_10) {
      return;
    }
    iVar3 = get_user(this,local_10);
    if (iVar3 == 0) {
LAB_085b7e27:
      bVar1 = true;
    }
    else {
      cVar2 = checkValidUser(this,local_10);
      if (cVar2 != '\x01') goto LAB_085b7e27;
      bVar1 = false;
    }
    if (!bVar1) {
      cUserHistoryLog::BloodRoundClear
                ((cUserHistoryLog *)(*(int *)(this + local_10 * 0x18 + 0x78) + 0x79700),param_1,
                 param_2,param_3,param_4,local_110);
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
