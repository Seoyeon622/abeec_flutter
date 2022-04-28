class Voca {
  final String? english;
  final String? korean;

  Voca({

    this.english,
    this.korean,
});

  Map<String, dynamic> toMap() => {
      'english': this.english,
      'korean': this.korean
    };



  @override
  String toString() {
    return 'Voca{english: $english, korean:$korean}';
  }


}
